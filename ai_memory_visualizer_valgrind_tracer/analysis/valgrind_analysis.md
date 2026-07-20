# Valgrind Analysis — AI Memory Visualizer & Valgrind Tracer

Environment: Valgrind 3.22.0, Linux devcontainer (arm64). Binaries recompiled
inside the container (Mac-compiled binaries are Mach-O and cannot run under
Linux Valgrind). `aliasing_example.c` and `crash_example.c` were compiled
without `-Werror` since modern gcc's static `-Wuse-after-free` check
correctly flags the intentional bug in `aliasing_example.c` and blocks the
build otherwise — the bug is intentional, so only `-Werror` was dropped, not
the underlying issue fixed.

## 1. `heap_example` — `valgrind --leak-check=full --show-leak-kinds=all`

```
6 bytes in 1 blocks are definitely lost in loss record 1 of 1
   at malloc (...)
   by person_new (heap_example.c:21)
   by main (heap_example.c:51)

LEAK SUMMARY:
   definitely lost: 6 bytes in 1 blocks
```

- **Error type**: memory leak (`definitely lost`).
- **Object involved**: `alice->name`, allocated at `heap_example.c:21`
  (`p->name = malloc(len + 1);`) during the `person_new("Alice", 30)` call.
  6 bytes matches exactly `"Alice"` (5 chars) + `'\0'`.
- **Cause**: `person_free_partial(alice)` only calls `free(p)`, never
  `free(p->name)`. Once `p` itself is freed, the only pointer to
  `p->name` is lost, making that block permanently unreachable —
  **a leak due to lost ownership**, not a missing `free()` call in
  isolation but a missing step in an incomplete cleanup function.
- `bob`, by contrast, is freed manually and completely
  (`free(bob->name); free(bob);`) — 0 bytes lost from that allocation,
  confirmed by `total heap usage: 5 allocs, 4 frees` (1 leaked block from a
  total of 5 allocations: 2 for `alice`, 2 for `bob`, 1 stdio buffer — see
  note in section 3 below on not assuming every heap byte comes from the
  program's own code).

## 2. `aliasing_example` — `valgrind --leak-check=full`

```
Invalid read of size 4
   at main (aliasing_example.c:42)
 Address ... is 8 bytes inside a block of size 20 free'd
   at free (...)
   by main (aliasing_example.c:38)
 Block was alloc'd at
   by make_numbers (aliasing_example.c:12)
   by main (aliasing_example.c:30)

Invalid write of size 4
   at main (aliasing_example.c:44)
 Address ... is 12 bytes inside a block of size 20 free'd (aliasing_example.c:38)

Invalid read of size 4
   at main (aliasing_example.c:45)
 Address ... is 12 bytes inside a block of size 20 free'd (aliasing_example.c:38)

HEAP SUMMARY: in use at exit: 0 bytes in 0 blocks
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 3 errors from 3 contexts
```

- **Error type**: 3 distinct **use-after-free** accesses. Valgrind's literal
  classification is `Invalid read of size 4` / `Invalid write of size 4`,
  not the string "use-after-free" — the use-after-free nature is proven by
  the accompanying note on every single report: `is N bytes inside a block
  of size 20 free'd ... by main (aliasing_example.c:38)`, which is the exact
  `free(a);` call. Precise terminology for the report: *invalid read/write
  inside a freed block* = use-after-free.
- **Object involved**: the 20-byte block returned by `make_numbers(5)`
  (5 ints × 4 bytes), allocated at `aliasing_example.c:12`, aliased by both
  `a` and `b`. `free(a)` at line 38 releases this block; `b` still points
  into it.
- **Lines flagged**: line 42 (`reading b[2]`), line 44 (`b[3] = 1234;`),
  line 45 (`printf ... b[3]`) — all three touch the freed block through `b`.
- **No leaks reported** here (`0 bytes in 0 blocks`) — correct, since every
  byte of the block *was* freed; the bug is about accessing it afterward,
  not about failing to free it.

### AI-correction note (this task)
Initial assumption during manual analysis (before running Valgrind) was
that reading `b[2]` after `free(a)` would necessarily return a different,
"corrupted" value, since the block is reclaimed. Under Valgrind, `b[2]`
still read back `22` (the original, correct value) — unchanged from before
the free. **This was an overstatement**: a use-after-free does not
guarantee a changed or garbage value. The freed block simply has no
defined owner anymore; it may coincidentally still hold its old bytes if
nothing else has reused that memory yet. The real danger Valgrind flags is
not "the value will be wrong" but "the program no longer has any right to
read or write that address" — correctness of the observed value at any
given run is incidental, not something the program can rely on.

## 3. `crash_example` — `valgrind ./crash_example`

```
Invalid write of size 4
   at main (crash_example.c:32)
 Address 0x0 is not stack'd, malloc'd or (recently) free'd

Process terminating with default action of signal 11 (SIGSEGV)
 Access not within mapped region at address 0x0
   at main (crash_example.c:32)

HEAP SUMMARY: in use at exit: 1,024 bytes in 1 blocks
 total heap usage: 1 allocs, 0 frees, 1,024 bytes allocated
LEAK SUMMARY: still reachable: 1,024 bytes in 1 blocks
```

- **Error type**: invalid write to unmapped memory → `SIGSEGV`.
- **Object involved**: address `0x0` — explicitly flagged by Valgrind as
  `not stack'd, malloc'd or (recently) free'd`, i.e. a raw NULL pointer,
  not memory that was ever valid and became invalid.
- **Cause / lifetime violation**: `n = 0` in `main()` → `allocate_numbers()`
  hits `if (n <= 0) return NULL;` and never calls `malloc` → `nums = NULL`
  → `nums[0] = 42;` at `crash_example.c:32` dereferences NULL. Fully
  deterministic given `n = 0`; not a lifetime-ended object, but an object
  that was never allocated in the first place.
- **Note on the "1 allocs, 1,024 bytes" heap summary**: this does **not**
  come from the program's own code — `allocate_numbers` never reaches its
  `malloc` call for `n = 0`. It is the C library's internal stdout buffer,
  allocated automatically on the first `printf` call. Confirmed by the
  leak classification: `still reachable`, not `definitely lost`, and no
  `loss record` tied to a line in `crash_example.c`. Lesson: never assume a
  HEAP SUMMARY number maps to the program's visible `malloc` calls without
  checking the actual stack trace / loss record.

## Summary table

| Program            | Valgrind classification              | Object                  | Root cause                                  |
|---------------------|---------------------------------------|--------------------------|----------------------------------------------|
| heap_example        | definitely lost (leak)                | `alice->name` (6 bytes)  | `person_free_partial` never frees `p->name` |
| aliasing_example     | invalid read/write in freed block     | `make_numbers` block (20 bytes), aliased by `a`/`b` | use-after-free via `b` after `free(a)` |
| crash_example        | invalid write, SIGSEGV                | NULL pointer (`0x0`)     | `allocate_numbers(0)` returns NULL, never allocated |
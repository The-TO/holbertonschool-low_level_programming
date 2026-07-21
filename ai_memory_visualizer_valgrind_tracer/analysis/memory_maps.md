# Memory Maps — AI Memory Visualizer & Valgrind Tracer

## 1. `stack_example.c` — Stack memory

### Behavior observed
Running the program with recursive calls to `walk_stack(depth, max_depth)` shows
addresses **decreasing** at each recursive call:

```
depth=0 : &local_int = 0x16f1bab98
depth=1 : &local_int = 0x16f1bab58
depth=2 : &local_int = 0x16f1bab18
depth=3 : &local_int = 0x16f1baad8
```

This confirms that on this architecture, the stack grows toward **lower
addresses** as function calls are nested.

### Lifetime
- `local_int`, `local_buf`, `p_local` and `marker` are all stack-allocated
  local variables of `dump_frame()` / `walk_stack()`. Each recursive call
  creates its own independent stack frame, with its own copy of these
  variables at a different (lower) address.
- Comparing `[enter] depth=3` and `[exit] depth=3`, the address and value of
  `local_int` are identical — the raw bytes are still physically present in
  RAM at the moment of `return`.
- However, nothing in the source code explicitly frees this memory. What
  actually happens on `return` is that the **stack pointer register** moves
  back up (toward higher addresses), marking that region as available for
  reuse. The data is not erased — it becomes **indeterminate/reclaimed**,
  not "archived" or "saved."
- Any pointer (like `p_local`) kept and dereferenced after the function
  returns would be a **dangling pointer**: it may still show the old value
  by coincidence, or garbage if that stack region was overwritten by a
  later function call. This is undefined behavior.

### Pointer aliasing
- `p_local = &local_int` — `p_local` and `&local_int` are aliases of the
  same stack address for the duration of one frame. Confirmed by the
  identical addresses printed for both.

---

## 2. `heap_example.c` — Heap memory, ownership, and a deliberate leak

### Allocations
For each `Person` created via `person_new()`, **two independent heap
allocations** occur:
1. `p = malloc(sizeof(Person))` — the struct itself
2. `p->name = malloc(len + 1)` — a separate buffer for the name string

These are two distinct, non-contiguous heap blocks. Freeing one does not
free the other.

### Ownership and the leak
- Correct cleanup of one `Person` requires **two `free()` calls**, in this
  order: `free(p->name)` first, then `free(p)` (freeing `p` first would
  lose the only pointer to `p->name`, making it unreachable and therefore
  unfreeable — a leak).
- `person_free_partial(Person *p)` only calls `free(p)`. It **never frees
  `p->name`**. Every call to this function leaks the name buffer.
- In `main()`, the two `Person` objects are treated asymmetrically:
  - `bob`: freed correctly and explicitly — `free(bob->name);` then
    `free(bob);`.
  - `alice`: freed via `person_free_partial(alice)`, which only frees the
    struct. **`alice->name` is leaked** — confirmed by the program's own
    printed intent, `"a deliberate leak"`.

### How to confirm
`valgrind --leak-check=full ./heap_example` should report one block
"definitely lost," corresponding to `alice->name`.

---

## 3. `aliasing_example.c` — Aliasing and use-after-free

### Aliasing
`b = a;` makes `b` an alias of `a`: both pointers hold the exact same heap
address (confirmed: `a=0x10529dc10 b=0x10529dc10`). There is no ownership
distinction between them at the pointer level — `free()` operates on the
**address**, not on a named variable.

### Use-after-free
- `free(a);` releases the block at `0x10529dc10` back to the allocator.
  Because `b` holds the same address, `b` instantly becomes a **dangling
  pointer** too, without ever being touched directly.
- `reading b[2]` returns `4` instead of the pre-free value `22`, with no
  code ever writing `4` explicitly. This proves the freed block was not
  erased but is now indeterminate — and on the heap this is more
  dangerous than the stack case, because the allocator can silently reuse
  or overwrite that block for a completely unrelated allocation at any
  time.
- `b[3] = 1234;` is a **use-after-free write**, not a generic invalid
  write: Valgrind specifically recognizes that this exact block was freed
  earlier and flags the access against that free, rather than just
  reporting an out-of-bounds or unmapped access.

### How to confirm
`valgrind ./aliasing_example` should report an "Invalid write of size 4"
inside a block that was previously freed, with both the allocation and the
`free()` call shown in the backtrace.

---

## 4. `crash_example.c` — Deterministic NULL dereference

### Causal chain
1. `main()` calls `allocate_numbers(n)` with `n = 0`.
2. Inside `allocate_numbers()`, the guard `if (n <= 0) return NULL;`
   triggers immediately — `malloc` is never called.
3. `nums` in `main()` is therefore `NULL`.
4. `nums[0] = 42;` is equivalent to `*(nums + 0) = 42`, i.e. a write to
   address `0x0`.
5. Address `0x0` is never mapped into the process's address space, so the
   CPU raises a hardware fault, the kernel delivers `SIGSEGV`, and the
   process terminates immediately — before the following `printf` or the
   `free(nums)` are ever reached.

This is fully deterministic: given `n = 0`, the crash is guaranteed on
every run, not dependent on timing or memory layout.

### How to confirm
`valgrind ./crash_example` would show an "Invalid write of size 4" at
address `0x0`, with the backtrace pointing directly at the `nums[0] = 42;`
line — though the reasoning above already pins the exact cause without
needing to run it.

---

## 5. Documented AI correction

**Context:** while analyzing `stack_example.c`, discussing what happens to
`local_int` at the moment a function returns.

**Initial AI-adjacent phrasing considered:** describing the memory as
being "erased" or "dissipated" when the function returns.

**Why it was wrong:** the program's own output showed `local_int`'s value
still readable and unchanged (`103`) immediately at `[exit] depth=3`,
directly contradicting the idea that the bytes are erased. Describing it
as "erased" implies an active clearing operation that does not happen.

**Correction:** on `return`, no memory is cleared. Only the stack pointer
register is moved to mark the region as free. The bytes remain physically
present but the region becomes indeterminate/reclaimed — safe to overwrite
by future stack frames, but not guaranteed to still hold the old value.
This distinction matters because it explains *why* dangling pointers to
stack memory can appear to "still work" by coincidence right after a
function returns, and why that behavior is unreliable rather than safe.
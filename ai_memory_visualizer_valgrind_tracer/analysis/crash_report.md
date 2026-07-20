# Crash Report — `crash_example.c`

## 1. Description of the crash

Running `./crash_example` terminates immediately with a segmentation fault
(`SIGSEGV`), before the program reaches its second `printf` or its `free`
call. Confirmed deterministically under Valgrind:

```
Invalid write of size 4
   at main (crash_example.c:32)
 Address 0x0 is not stack'd, malloc'd or (recently) free'd

Process terminating with default action of signal 11 (SIGSEGV)
 Access not within mapped region at address 0x0
   at main (crash_example.c:32)
```

The crash occurs on every run, with `n` hard-coded to `0` in `main()` — it
does not depend on timing, uninitialized memory, or system state. This is
not a stack overflow, race condition, or heap corruption; it is a direct,
reproducible NULL-pointer dereference.

## 2. Root cause analysis — full causal chain

1. `main()` declares `int n = 0;` and calls `allocate_numbers(n)`.
2. Inside `allocate_numbers()`, the guard clause
   `if (n <= 0) return NULL;` evaluates true for `n = 0` and the function
   returns immediately — `malloc()` is never reached, and no heap block is
   ever allocated for this call.
3. Back in `main()`, `nums = allocate_numbers(n);` assigns `nums = NULL`.
4. The very next line, `nums[0] = 42;`, is equivalent to
   `*(nums + 0) = 42;`, i.e. a write to address `0x0`.
5. Address `0x0` is never part of the process's mapped virtual address
   space. The CPU's memory management unit raises a hardware fault on this
   access; the kernel delivers `SIGSEGV` to the process, which terminates
   immediately.

Memory involved: **neither stack nor heap** — the access targets address
`0x0`, a region that was never allocated on the heap and is not part of
any stack frame. Valgrind's own output confirms this explicitly:
`Address 0x0 is not stack'd, malloc'd or (recently) free'd`. This is a
NULL dereference, a distinct category from both stack and heap misuse.

## 3. Why the memory access is invalid

A pointer only refers to valid memory if it holds the address of an object
whose lifetime is currently active (a live stack frame, or a heap block
between `malloc` and `free`). `nums` here holds `NULL` — the sentinel value
`allocate_numbers()` deliberately returns to signal "no allocation was
made." Writing through it does not target reclaimed or freed memory (as in
a use-after-free); it targets an address that was **never backed by any
allocation at all**. The write is invalid because no memory object exists
there for the process to legitimately access, mapped or otherwise.

## 4. AI-assisted causes / fixes — proposed and critiqued

**AI-proposed explanation considered:** Valgrind's own crash output
includes a generic disclaimer suggesting the fault "might be a result of a
stack overflow in your program's main thread (unlikely but possible)" and
recommending `--main-stacksize=`. A shallow AI reading of this output could
latch onto that line and propose "this crash may be caused by stack
overflow — consider increasing stack size" as a plausible cause.

**Why this is incorrect here:** that disclaimer is boilerplate Valgrind
prints for *any* SIGSEGV, as a general-purpose hint, not a diagnosis
specific to this run. The same output already states plainly that address
`0x0` is `not stack'd` — directly ruling out a stack-related fault (a
stack overflow would show an address near the current stack pointer, not
exactly `0x0`). Treating the generic disclaimer as the actual cause would
be speculative and contradicted by the more specific line right above it
in the same report. The correct read is the deterministic one traced in
section 2: a guard clause returning `NULL` followed by an unchecked
dereference — nothing related to stack size.

**Suggested fix (optional, clearly separated from analysis above):**
check the return value of `allocate_numbers()` before dereferencing it:

```c
nums = allocate_numbers(n);
if (nums == NULL) {
    /* handle n <= 0 or malloc failure, e.g. return 1; */
}
nums[0] = 42;
```

This fix is not required by the task and no source file was modified for
this report — it is included only as a labeled suggestion.

## 5. Category of undefined behavior

**NULL pointer dereference** — a distinct category from use-after-free
(access to memory whose lifetime already ended) or a leak (memory whose
lifetime never ends). Here, the accessed memory never had a lifetime to
begin with; the pointer was never valid in the first place.
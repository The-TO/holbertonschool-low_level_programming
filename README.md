# holbertonschool-low_level_programming

## About

This repository contains all the projects completed as part of the
**Low-Level Programming** curriculum at Holberton School. It covers C
programming from the fundamentals (variables, loops, functions) up to
more advanced topics such as pointers, dynamic memory management, data
structures (linked lists, hash tables), recursion, variadic functions,
debugging, and memory analysis tools like GDB and Valgrind.

## Requirements

Unless stated otherwise in a specific project:

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the **Betty** coding style
- All files end with a new line
- Each project directory has its own `README.md` with more detail

## Projects

| Directory | Topic |
| --- | --- |
| [`hello_world`](./hello_world) | First C programs, and the 4 stages of compilation (preprocessing, compilation, assembly, linking) |
| [`variables_if_else_while`](./variables_if_else_while) | Variables, `if`/`else` conditionals, `while` loops |
| [`functions_nested_loops`](./functions_nested_loops) | Functions and nested loops |
| [`more_functions_nested_loops`](./more_functions_nested_loops) | More functions, nested loops (FizzBuzz, shapes, etc.) |
| [`pointers_arrays_strings`](./pointers_arrays_strings) | Pointers, arrays, and strings; re-implementing `string.h` functions |
| [`argc_argv`](./argc_argv) | Command-line arguments (`argc`/`argv`) |
| [`function_pointers`](./function_pointers) | Function pointers, arrays of function pointers, a small calculator |
| [`variadic_functions`](./variadic_functions) | Variadic functions with `<stdarg.h>` |
| [`malloc_free`](./malloc_free) | Dynamic memory allocation basics (`malloc`/`free`) |
| [`more_malloc_free`](./more_malloc_free) | More dynamic memory allocation, safer allocation patterns |
| [`structures_typedef`](./structures_typedef) | Structures and `typedef` |
| [`singly_linked_lists`](./singly_linked_lists) | Singly linked lists |
| [`doubly_linked_lists`](./doubly_linked_lists) | Doubly linked lists |
| [`hash_tables`](./hash_tables) | Hash tables with chaining |
| [`recursion`](./recursion) | Recursive algorithms (factorial, power, sqrt, primality, etc.) |
| [`intro_debugging`](./intro_debugging) | Introduction to debugging small buggy programs |
| [`dynamic_analysis`](./dynamic_analysis) | Dynamic analysis with GDB (and VS Code) to reverse-engineer program behavior |
| [`benchmarking`](./benchmarking) | Green-tech benchmarking lab: measuring execution time and algorithmic efficiency |
| [`secure_data_handling`](./secure_data_handling) | Secure in-memory data store lab: finding and fixing memory-management bugs |
| [`secure-input-memory-lab-main`](./secure-input-memory-lab-main) | Starter lab with intentionally vulnerable C code, for analysis and patching |
| [`ai_memory_visualizer_valgrind_tracer`](./ai_memory_visualizer_valgrind_tracer) | Stack vs. heap memory analysis, pointer aliasing, and Valgrind diagnostics |
| [`simple-calculator`](./simple-calculator) | Interactive command-line calculator (`scanf`, conditionals, loops) |

## Compilation

Each project can be compiled individually; see its own `README.md` for
exact instructions. In general:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o program_name
```

## Author

**Théo** ([The-TO](https://github.com/The-TO)) - Holberton School student
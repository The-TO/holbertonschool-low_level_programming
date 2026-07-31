# function_pointers

## Description

This project is a collection of C programs exploring function pointers:
storing the address of a function in a variable, passing functions as
arguments, and using an array of function pointers to select an operation
at runtime (a simple command-line calculator).

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- A `README.md` file at the root of the project is mandatory

## Files

| File | Description |
| --- | --- |
| `0-print_name.c` | `print_name` - prints a name using a function pointer |
| `1-array_iterator.c` | `array_iterator` - executes a function given as a parameter on each element of an array |
| `2-int_index.c` | `int_index` - searches for an integer in an array using a comparison function pointer |
| `3-op_functions.c` | Arithmetic functions (`op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`) used by the calculator |
| `3-get_op_func.c` | `get_op_func` - selects the correct function pointer based on an operator string |
| `3-calc.h` / `3-main.c` | Entry point of the calculator: reads two numbers and an operator from the command line, computes the result, and handles invalid operators / division-by-zero errors |
| `function_pointers.h` | Header file with the prototypes for `print_name`, `array_iterator`, and `int_index` |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-calc.h 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

## Usage example (calculator)

```bash
$ ./calc 3 + 5
8
$ ./calc 10 / 0
Error
```

> Note: in this repo, `3-calc.h` currently contains the same content as
> `3-main.c` (the calculator's `main` function) instead of the header
> declarations. You may want to fix this so `3-calc.h` only contains the
> `op_t` struct definition and function prototypes.

## Author

Théo - Holberton School
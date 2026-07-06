# 0x05. C - More functions, more nested loops

## Description

This project is part of the Holberton School / ALX low-level programming
curriculum. It's a continuation of `functions_nested_loops`, going further
into functions and nested loops: checking character types, multiplying
numbers, printing sequences of numbers with various formatting rules,
drawing lines, diagonals, squares and triangles with `#`, and the classic
FizzBuzz exercise.

Only `_putchar` is used to print output (except for `9-fizz_buzz.c`, which
is a standalone `main` using `printf`).

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc` using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the **Betty** coding style
- All files end with a new line
- No more than 5 functions per file
- Allowed to use a maximum of 5 functions from the standard library within a project (only `_putchar` in this one)
- Every function is documented (README + Betty-style header comments)

## Files

| File | Description |
| --- | --- |
| `0-isupper.c` | Checks for uppercase character |
| `1-isdigit.c` | Checks for a digit (0 through 9) |
| `2-mul.c` | Multiplies two integers |
| `3-print_numbers.c` | Prints the numbers, from 0 to 9 |
| `4-print_most_numbers.c` | Prints the numbers, from 0 to 9, except 2 and 4 |
| `5-more_numbers.c` | Prints numbers from 0 to 14, ten times, in increasing order |
| `6-print_line.c` | Prints a line of `n` times the character `_` |
| `7-print_diagonal.c` | Draws a diagonal line on the terminal, made of `n` `\` characters |
| `8-print_square.c` | Prints a square with the character `#`, with a given size |
| `9-fizz_buzz.c` | Prints numbers from 1 to 100, following the FizzBuzz rules |
| `10-print_triangle.c` | Prints a triangle with the character `#`, with a given size |
| `main.h` | Header file with all function prototypes |
| `_putchar.c` | Writes a single character to `stdout` |

## Prototypes

```c
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
int _putchar(char c);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o exercise
```

## Example

```bash
$ cat 8-main.c
#include "main.h"

int main(void)
{
    print_square(4);
    return (0);
}
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-main.c 8-print_square.c -o square
$ ./square
####
####
####
####
```

## Author

**Théo** - [The-TO](https://github.com/The-TO) - Holberton School student
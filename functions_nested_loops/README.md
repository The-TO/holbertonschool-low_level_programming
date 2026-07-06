# 0x05. C - Functions, nested loops

## Description

This project is part of the Holberton School / ALX low-level programming
curriculum. It focuses on writing and using functions in C, and combining
them with nested loops to solve small algorithmic problems: printing the
alphabet, checking character types, computing signs and absolute values,
printing digits, simulating a 24-hour clock, and building a multiplication
table.

Only `_putchar` is used to print output (no `printf` for the actual results),
which forces manual handling of characters and numbers.

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
| `0-putchar.c` | Prints `_putchar` using `_putchar`, followed by a new line |
| `1-alphabet.c` | Prints the alphabet in lowercase, followed by a new line |
| `2-print_alphabet_x10.c` | Prints the alphabet in lowercase 10 times |
| `3-islower.c` | Checks for lowercase character |
| `4-isalpha.c` | Checks for a letter |
| `5-sign.c` | Prints the sign of a number (+, - or 0) |
| `6-abs.c` | Computes the absolute value of an integer |
| `7-print_last_digit.c` | Prints the last digit of a number |
| `8-24_hours.c` | Prints all the minutes of a day, from 00:00 to 23:59 |
| `9-times_table.c` | Prints the 9 times table, starting with 0 |
| `10-add.c` | Adds two integers and returns the result |
| `11-print_to_98.c` | Prints all the natural numbers from a given number `n` to 98 |
| `main.h` | Header file with all function prototypes |
| `_putchar.c` | Writes a single character to `stdout` |

## Prototypes

```c
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o exercise
```

## Example

```bash
$ cat 5-main.c
#include "main.h"

int main(void)
{
    int i;

    i = print_sign(1);
    i = print_sign(0);
    i = print_sign(-1);
    (void) i;
    return (0);
}
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-main.c 5-sign.c -o sign
$ ./sign
+-0
```

## Author

**Théo** - [The-TO](https://github.com/The-TO) - Holberton School student
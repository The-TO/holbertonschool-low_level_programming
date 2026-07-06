# 0x03. C - Variables, if, else, while

## Description

This project is part of the Holberton School / ALX low-level programming
curriculum. It's an introduction to variables, conditionals (`if`/`else`),
and `while` loops in C, through small standalone programs: generating and
classifying random numbers, printing the alphabet in various orders and
combinations, and printing digits and hexadecimal characters.

Each file in this project is a standalone program with its own `main`
function (no header file / no `main.h` needed here).

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc` using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the **Betty** coding style
- All files end with a new line

## Files

| File | Description |
| --- | --- |
| `0-positive_or_negative.c` | Generates a random number and prints whether it is positive, negative, or zero |
| `1-last_digit.c` | Generates a random number and prints its last digit, along with whether it's greater than, less than, or equal to 5 |
| `2-print_alphabet.c` | Prints the alphabet in lowercase, followed by a new line |
| `3-print_alphabets.c` | Prints the alphabet in lowercase and uppercase, followed by a new line |
| `4-print_alphabt.c` | Prints the alphabet in lowercase, except for `q` and `e` |
| `5-print_numbers.c` | Prints numbers from 0 to 9, followed by a new line |
| `6-print_numberz.c` | Prints numbers from 0 to 9, followed by a new line, using only `putchar` |
| `7-print_tebahpla.c` | Prints the alphabet in reverse (lowercase), followed by a new line |
| `8-print_base16.c` | Prints digits of the number 10 in base 16, lowercase, followed by a new line |
| `9-print_comb.c` | Prints all possible single-digit numbers, separated by a comma and a space |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o exercise
```

## Example

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-print_comb.c -o comb
$ ./comb
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```

## Author

**Théo** - [The-TO](https://github.com/The-TO) - Holberton School student
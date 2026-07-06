# 0x06. C - Pointers, Arrays and Strings

## Description

This project is part of the Holberton School / ALX low-level programming curriculum.
It covers the fundamentals of pointers, arrays, and strings in C: how they relate
to each other in memory, and how to manipulate them without relying on the
standard library (only `_putchar` is allowed).

Most exercises consist of re-implementing well-known functions from `string.h`
(`strlen`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strspn`, `strpbrk`, `strstr`,
`memset`, `memcpy`) as well as working directly with arrays (reversing,
printing, 2D arrays).

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
| `0-reset_to_98.c` | Resets the value pointed to by `n` to 98 |
| `1-swap.c` | Swaps the values of two integers `a` and `b` |
| `2-strlen.c` | Returns the length of a string |
| `3-puts.c` | Prints a string, followed by a new line, using `_putchar` |
| `4-print_rev.c` | Prints a string in reverse |
| `5-rev_string.c` | Reverses a string in place |
| `6-puts2.c` | Prints every other character of a string, starting with the first |
| `7-puts_half.c` | Prints the second half of a string |
| `8-print_array.c` | Prints `n` elements of an array of integers |
| `9-strcpy.c` | Copies the string pointed to by `src` (including the null byte) into `dest` |
| `0-strcat.c` | Concatenates two strings |
| `1-strncat.c` | Concatenates two strings, using at most `n` bytes from `src` |
| `2-strncpy.c` | Copies a string, using at most `n` bytes from `src` |
| `3-strcmp.c` | Compares two strings |
| `4-rev_array.c` | Reverses the content of an array of integers |
| `5-string_toupper.c` | Converts lowercase letters of a string to uppercase |
| `6-cap_string.c` | Capitalizes all words of a string |
| `7-leet.c` | Encodes a string into "1337" (leet speak) |
| `0-memset.c` | Fills the first `n` bytes of a memory area with a constant byte `b` |
| `1-memcpy.c` | Copies `n` bytes from a memory area to another |
| `2-strchr.c` | Locates the first occurrence of a character in a string |
| `3-strspn.c` | Gets the length of a prefix substring made only of accepted bytes |
| `4-strpbrk.c` | Searches a string for the first occurrence of any byte from a set |
| `5-strstr.c` | Locates a substring in a string |
| `7-print_chessboard.c` | Prints an 8x8 chessboard using a 2D array |
| `8-print_diagsums.c` | Prints the sums of the two diagonals of a square matrix |
| `main.h` | Header file with all function prototypes |
| `_putchar.c` | Writes a single character to `stdout` |

## Prototypes

```c
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o exercise
```

## Example

```bash
$ cat 2-main.c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Best School";

    printf("%d\n", _strlen(str));
    return (0);
}
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-strlen.c -o strlen
$ ./strlen
11
```

## Author

**Théo** - [The-TO](https://github.com/The-TO) - Holberton School student
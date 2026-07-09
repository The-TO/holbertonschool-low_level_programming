# 0x0B. C - More malloc, free

## Description

This project is part of the Holberton School low-level programming
curriculum. It builds on the basics of dynamic memory allocation and
focuses on writing safer, more robust functions that use `malloc` while
handling edge cases such as allocation failure, invalid input, and
NULL pointers.

## Requirements

- Compiled on Ubuntu 20.04 LTS
- Compiled with `gcc` using the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the [Betty](https://github.com/hs-hq/Betty) coding style
- No more than one `.c` file, one `.h` file, and one `README.md` per
  directory (main files used for testing are excluded)
- Global variables are not allowed
- Only `malloc` and `free` may be used to manage memory; no other
  standard library allocation function is allowed unless specified
- All prototypes are grouped in `main.h`

## Files

| File | Description |
| --- | --- |
| `0-malloc_checked.c` | `malloc_checked` - allocates memory using `malloc`; if the allocation fails, the program exits immediately with status `98` instead of returning `NULL` |
| `1-string_nconcat.c` | `string_nconcat` - concatenates two strings, copying `n` bytes of the second string; if `n` is greater than or equal to the length of the second string, the whole string is used |
| `2-calloc.c` | `_calloc` - allocates memory for an array and initializes every byte to `0`; returns `NULL` if `nmemb` or `size` is `0`, or if the allocation fails |
| `3-array_range.c` | `array_range` - creates and returns a new array containing all the integers from `min` to `max`, inclusive; returns `NULL` if `min > max` or if the allocation fails |
| `main.h` | Header file containing all function prototypes |
| `*-main.c` | Example test files provided to check each function |

## Function Prototypes

```c
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
```

## Compilation

Each file can be compiled individually with its matching test file, for
example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o 0-malloc_checked
```

## Usage

```bash
$ ./0-malloc_checked
0x55d3f1e276b0
0x55d3f1e27ab0
0x55d3f1e28650
0x55d3f303b6b0
```

## Author

Théo - [The-TO](https://github.com/The-TO)
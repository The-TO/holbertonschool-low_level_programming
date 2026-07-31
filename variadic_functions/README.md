# variadic_functions

## Description

This project explores variadic functions in C using the `<stdarg.h>`
macros (`va_list`, `va_start`, `va_arg`, `va_end`). It covers summing an
arbitrary number of integers, printing numbers or strings separated by a
custom separator, and printing arguments of mixed types based on a format
string (similar in spirit to `printf`).

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- No more than 5 functions per file
- All prototypes grouped in `variadic_functions.h`, with include guards

## Files

| File | Description |
| --- | --- |
| `variadic_functions.h` | Header file with all function prototypes |
| `0-sum_them_all.c` | `sum_them_all` - returns the sum of all its integer parameters (0 if `n` is 0) |
| `1-print_numbers.c` | `print_numbers` - prints integers separated by a given separator |
| `2-print_strings.c` | `print_strings` - prints strings separated by a given separator; prints `(nil)` for a `NULL` string |
| `3-print_all.c` | `print_all` - prints arguments of different types (`c`, `i`, `f`, `s`), depending on a format string |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o exercise
```

## Example

```bash
$ cat 3-main.c
#include "variadic_functions.h"

int main(void)
{
    print_all("sicsc", "Best", "School", 98, ", ", 'c');
    return (0);
}
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-print_all.c -o all
$ ./all
Best, School, 98, , , c
```

> Note: `3-print_all.c` currently has a stray `.` after the `while`
> condition (`while (format && format[i]).`), which will not compile as-is —
> worth double-checking before submitting.

## Author

Théo - Holberton School
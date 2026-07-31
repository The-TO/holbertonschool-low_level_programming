# recursion

## Description

This project is a collection of C functions solving classic problems using
recursion instead of loops: printing and reversing strings, computing string
length, factorial, power, integer square root, and testing primality.

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- No more than 5 functions per file
- No loops allowed (`for`, `while`, `do...while`) — every repetition must
  be done through recursion
- No global variables, no `static` variables
- Only `_putchar` allowed from the C standard library
- All prototypes grouped in `main.h`

## Files

| File | Description |
| --- | --- |
| `main.h` | Header file with all function prototypes |
| `0-puts_recursion.c` | `_puts_recursion` - prints a string, followed by a new line, using recursion |
| `1-print_rev_recursion.c` | `_print_rev_recursion` - prints a string in reverse, using recursion |
| `2-strlen_recursion.c` | `_strlen_recursion` - returns the length of a string, using recursion |
| `3-factorial.c` | `factorial` - returns the factorial of a number (-1 if negative) |
| `4-pow_recursion.c` | `_pow_recursion` - returns `x` raised to the power `y` (-1 if `y` is negative) |
| `5-sqrt_recursion.c` | `_sqrt_recursion` - returns the natural square root of a number, or -1 if it doesn't exist |
| `6-is_prime_number.c` | `is_prime_number` - returns 1 if a number is prime, 0 otherwise |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o exercise
```

## Example

```bash
$ cat 3-main.c
#include "main.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", factorial(5));
    return (0);
}
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-factorial.c -o factorial
$ ./factorial
120
```

## Author

Théo - Holberton School
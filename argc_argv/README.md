# argc_argv

## Description

This project is a collection of C programs that explore `argc` and `argv`,
the two parameters passed to a program's `main` function on the command
line. It covers reading the program name, counting arguments, printing
arguments, and performing simple arithmetic (multiplication and addition)
on numeric arguments.

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- All files end with a new line
- A `README.md` file at the root of the project is mandatory

## Files

| File | Description |
| --- | --- |
| `0-whatsmyname.c` | Prints the name of the program |
| `1-args.c` | Prints the number of arguments passed to it |
| `2-args.c` | Prints all arguments passed to it, one per line |
| `3-mul.c` | Multiplies two numbers; prints the result. If the number of arguments is incorrect, prints `Error` followed by a new line, and returns `1` |
| `4-add.c` | Adds all the numbers passed as arguments. If no arguments are given, prints `0`. If one of the arguments is not a digit, prints `Error` followed by a new line, and returns `1` |
| `main.h` | Header file with function prototypes |

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o program_name
```

## Usage examples

```
$ ./0-whatsmyname
./0-whatsmyname
$ ./1-args a b c
3
$ ./2-args a b c
./2-args
a
b
c
$ ./3-mul 3 4
12
$ ./4-add 12 22
34
```

## Author

Théo - Holberton School
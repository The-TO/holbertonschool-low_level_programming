# 0x00. C - Hello, World

## Description

This project is part of the Holberton School / ALX low-level programming
curriculum. It's the very first project of the curriculum: writing the
classic "Hello, World"-style programs, and getting familiar with the four
stages of compiling a C program with `gcc` (preprocessing, compilation,
assembly, and linking).

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc` using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All shell scripts pass `Shellcheck` (version `0.3.7`) without any error
- All shell scripts are exactly two lines long (`#!/bin/bash` + the command)
- All files end with a new line

## Files

| File | Description |
| --- | --- |
| `0-preprocessor` | Shell script that preprocesses a C file, given by the environment variable `CFILE` |
| `1-compiler` | Shell script that compiles a C file, given by the environment variable `CFILE`, without linking |
| `2-assembler` | Shell script that generates the assembly code of a C file, given by the environment variable `CFILE` |
| `3-name` | Shell script that compiles a C file, given by the environment variable `CFILE`, into an executable named `cisfun` |
| `4-puts.c` | Prints a sentence to stdout using `puts` |
| `5-printf.c` | Prints a sentence to stdout using `printf` |
| `6-size.c` | Prints the size of various C types (`char`, `int`, `long int`, `long long int`, `float`) |

## The 4 stages of compilation

- **Preprocessing** (`gcc -E`): handles macros, `#include`, and comments, producing an expanded source file.
- **Compilation** (`gcc -S`): translates the preprocessed code into assembly language.
- **Assembly** (`gcc -c`): converts the assembly code into machine code (an object file).
- **Linking**: combines object files and libraries into a single executable.

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o exercise
```

## Example

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o size
$ ./size
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

## Author

**Théo** - [The-TO](https://github.com/The-TO) - Holberton School student
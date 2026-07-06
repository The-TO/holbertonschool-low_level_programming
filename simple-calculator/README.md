# Simple Calculator

## Description

This project is a small interactive command-line calculator written in C.
It's part of the Holberton School / ALX low-level programming curriculum,
used as a practical exercise on `scanf`, conditionals, and `while` loops.

The program displays a menu and lets the user perform basic arithmetic
operations repeatedly until they choose to quit.

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`
- No more than 5 functions per file
- All files end with a new line

## Files

| File | Description |
| --- | --- |
| `calculator.c` | Interactive calculator: addition, subtraction, multiplication, division |

## How it works

The program loops on a menu of 5 choices:

```
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
```

- The user picks an operation (`1`-`4`) or quits (`0`).
- For arithmetic operations, the user is prompted for two integers `A` and `B`.
- The result is printed to standard output.
- Division by zero is handled with an explicit error message instead of crashing.
- Entering a choice outside `0`-`4` ends the program with an "Invalid choice" message.

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Example

```bash
$ ./calculator
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
choice ?
1
choice: 1
A: 4
B: 3
Result: 7
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
choice ?
0
bye!
```

## Author

**Théo** - [The-TO](https://github.com/The-TO) - Holberton School student
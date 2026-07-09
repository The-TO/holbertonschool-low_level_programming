# 0x0C. C - Structures, typedef

## Description

This project is part of the Holberton School low-level programming
curriculum. It introduces structures (`struct`) and the `typedef`
keyword in C, using a `dog` structure as a running example to practice
initializing, printing, dynamically creating, and freeing structures
that contain pointers.

## Requirements

- Compiled on Ubuntu 20.04 LTS
- Compiled with `gcc` using the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the [Betty](https://github.com/hs-hq/Betty) coding style
- No more than one `.c` file, one `.h` file, and one `README.md` per
  directory (main files used for testing are excluded)
- Global variables are not allowed
- Only `malloc` and `free` may be used to manage memory
- All prototypes, as well as the `dog` structure and its `dog_t` typedef,
  are grouped in `dog.h`

## The `dog` structure

```c
/**
 * struct dog - structure that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
```

## Files

| File | Description |
| --- | --- |
| `dog.h` | Header file with the `struct dog` / `dog_t` definition and all function prototypes |
| `1-init_dog.c` | `init_dog` - initializes an already-existing `struct dog` with the given `name`, `age`, and `owner` (no allocation, no return value) |
| `2-print_dog.c` | `print_dog` - prints the fields of a `struct dog`; prints `(nil)` for a `name` or `owner` that is `NULL`, and does nothing if the struct pointer itself is `NULL` |
| `4-new_dog.c` | `new_dog` - dynamically allocates a new `dog_t`, using a `_strdup`-style helper to create independent copies of `name` and `owner`; frees any partial allocation and returns `NULL` on failure |
| `4-new_dog_sans_limite.c` | Alternative version of `new_dog`, copying `name` and `owner` manually with `malloc` and a loop instead of a separate `_strdup` helper |
| `5-free_dog.c` | `free_dog` - frees a `dog_t` created with `new_dog`, releasing `name`, `owner`, then the structure itself; does nothing if the pointer is `NULL` |

## Function Prototypes

```c
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
```

## Compilation

Each file can be compiled individually with its matching test file, for
example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-print_dog.c -o 2-print_dog
```

## Usage

```bash
$ ./2-print_dog
Name: Boby
Age: 3.000000
Owner: Amel
```

## Author

Théo - [The-TO](https://github.com/The-TO)
# doubly_linked_lists

## Description

This project is a collection of C functions that implement and manipulate
doubly linked lists (`dlistint_t`). It covers printing, counting, adding,
summing, inserting, deleting, and freeing nodes in a doubly linked list of
integers.

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- No more than 5 functions per file
- No global variables allowed
- Only `malloc`, `free`, `printf`, and `exit` allowed from the C standard library
- All header files must be include guarded
- A `README.md` file at the root of the project is mandatory

## Data structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Files

| File | Description |
| --- | --- |
| `lists.h` | Header file with the `dlistint_t` structure and function prototypes |
| `0-print_dlistint.c` | Prints all the elements of a `dlistint_t` list, returns the number of nodes |
| `1-dlistint_len.c` | Returns the number of elements in a `dlistint_t` list |
| `2-add_dnodeint.c` | Adds a new node at the beginning of a `dlistint_t` list |
| `3-add_dnodeint_end.c` | Adds a new node at the end of a `dlistint_t` list |
| `4-free_dlistint.c` | Frees a `dlistint_t` list |
| `5-get_dnodeint.c` | Returns the node at a given index of a `dlistint_t` list |
| `6-sum_dlistint.c` | Returns the sum of all the data of a `dlistint_t` list |
| `7-insert_dnodeint.c` | Inserts a new node at a given position of a `dlistint_t` list |
| `8-delete_dnodeint.c` | Deletes the node at a given index of a `dlistint_t` list |

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
```

## Author

Théo - Holberton School
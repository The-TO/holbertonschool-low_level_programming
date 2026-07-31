# singly_linked_lists

## Description

This project is a collection of C functions that implement and manipulate
singly linked lists (`list_t`) of strings. It covers printing, counting,
adding nodes at the beginning and end of the list, and freeing the list.

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- No more than 5 functions per file
- Only `malloc`, `free`, and `exit` allowed from the C standard library
  (plus `_putchar`)
- All prototypes grouped in `lists.h`, with include guards
- A `README.md` file at the root of the project is mandatory

## Data structure

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Files

| File | Description |
| --- | --- |
| `lists.h` | Header file with the `list_t` structure and function prototypes |
| `0-print_list.c` | `print_list` - prints all the elements of a `list_t` list, returns the number of nodes |
| `1-list_len.c` | `list_len` - returns the number of elements in a `list_t` list |
| `2-add_node.c` | `add_node` - adds a new node at the beginning of a `list_t` list |
| `3-add_node_end.c` | `add_node_end` - adds a new node at the end of a `list_t` list |
| `4-free_list.c` | `free_list` - frees a `list_t` list |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
```

## Author

Théo - Holberton School

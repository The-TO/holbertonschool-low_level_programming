# hash_tables

## Description

This project implements a hash table in C, using separate chaining (linked
lists) to handle collisions. It covers creating a hash table, hashing keys
with the djb2 algorithm, setting/getting key-value pairs, printing the
table, and freeing all its memory.

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc`, using the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows the Betty coding style
- No more than 5 functions per file
- No global variables allowed
- Prototypes grouped in `hash_tables.h`, with include guards
- A `README.md` file at the root of the project is mandatory

## Data structures

```c
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

## Files

| File | Description |
| --- | --- |
| `hash_tables.h` | Header file with the structures and function prototypes |
| `0-hash_table_create.c` | `hash_table_create` - creates a hash table of a given size |
| `1-djb2.c` | `hash_djb2` - implementation of the djb2 hash algorithm |
| `2-key_index.c` | `key_index` - computes the index of a key in the table's array |
| `3-hash_table_set.c` | `hash_table_set` - adds or updates an element in the hash table |
| `4-hash_table_get.c` | `hash_table_get` - retrieves the value associated with a key |
| `5-hash_table_print.c` | `hash_table_print` - prints a hash table as `{key: value, ...}` |
| `6-hash_table_delete.c` | `hash_table_delete` - deletes a hash table and frees all its memory |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_tables
```

## Author

Théo - Holberton School
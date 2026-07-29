#include "hash_tables.h"
#include "stdlib.h"

/**
 * hash_table_create - Function that creates a hashtable
 * @size: Size of the table
 * Return: theTABLE (Created the table)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

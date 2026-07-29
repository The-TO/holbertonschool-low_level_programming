#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: Key string (must not be empty)
 * @value: Value string
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *cur;
	char *dup_value, *dup_key;

	if (!ht || !key || key[0] == '\0' || !value)
	return (0);
	index = key_index((const unsigned char *)key, ht->size);

	cur = ht->array[index];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			dup_value = strdup(value);
			if (!dup_value)
			{
				return (0);
			}
			free(cur->value);
			cur->value = dup_value;
			return (1);
		}
		cur = cur->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		return (0);
	}
	dup_key = strdup(key);
	if (!dup_key)
	{
		free(node);
		return (0);
	}
	dup_value = strdup(value);
	if (!dup_value)
	{
		free(dup_key);
		free(node);
		return (0);
	}
	node->key = dup_key;
	node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

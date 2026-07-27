#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index where to insert
 * @n: value to store
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int count;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	prev_node = *h;
	count = 0;
	while (prev_node != NULL && count < idx - 1)
	{
		prev_node = prev_node->next;
		count++;
	}
	if (prev_node == NULL)
		return (NULL);

	if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	next_node = prev_node->next;
	new_node->n = n;
	new_node->next = next_node;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	next_node->prev = new_node;

	return (new_node);
}

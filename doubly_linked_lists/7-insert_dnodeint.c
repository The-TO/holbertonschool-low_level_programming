#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: value to insert
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;
	dlistint_t *next_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	prev_node = get_dnodeint_at_index(*h, idx - 1);
	if (prev_node == NULL)
		return (NULL);
	if (prev_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
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

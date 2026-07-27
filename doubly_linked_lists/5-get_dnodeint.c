#include "lists.h"

/**
 * get_dnodeint_at_index - Return the node at a given index
 * @head: pointer to the head of the list
 * @index: the index to look for
 *
 * Return: the node at index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	current = head;
	count = 0;
	while (current != NULL)
	{
		if (index == count)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}

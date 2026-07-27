#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Description: Traverses the entire doubly linked list and frees
 * every node's allocated memory. Must save the next pointer before
 * freeing each node, otherwise we lose the reference to continue.
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

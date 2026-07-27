#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Description: Creates a new node with value n and adds it at the end
 * of the doubly linked list. If the list is empty, the new node becomes
 * the head. Updates the prev and next pointers correctly for a doubly
 * linked list.
 *
 * Return: Address of the newly created node, or NULL if malloc failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->next = NULL;
	new->prev = last;
	return (new);
}

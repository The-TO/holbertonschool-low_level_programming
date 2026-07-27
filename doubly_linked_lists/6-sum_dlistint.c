#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);
		if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

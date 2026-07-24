#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len;
	list_t *node;
	list_t *temp;

	node = malloc(sizeof(list_t));
	if (node != NULL)
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		len = 0;
		while (str[len] != '\0')
		{
			len++;
		}
		node->len = len;
		node->next = NULL;
		temp = *head;

		if (temp == NULL)
		{
			*head = node;
			return (node);
		}

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
		return (node);
		}
		else
		{
		return (NULL);
		}
}

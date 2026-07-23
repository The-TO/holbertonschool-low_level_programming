#include <stdio.h>
#include "lists.h"
#include<string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *node;

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
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		return (NULL);
	}
}


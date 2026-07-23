#include "lists.h"

size_t print_list(const list_t *h)
{

	const list_t *temp = h;
	size_t compteur;

	compteur = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		compteur++;
	}
	return (compteur);
}

#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t compteur;
    const list_t *temp = h;

	compteur = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		compteur++;
	}
	return (compteur);
}

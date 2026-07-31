#include "lists.h"

/**
 * get_dnodeint_at_index - Retourne le nœud à un index donné
 * @head: Pointeur vers la tête de la liste
 * @index: L'index recherché
 *
 * Return: Le nœud à l'index donné, ou NULL s'il n'existe pas
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current; /* Pointeur pour parcourir la liste */
	unsigned int count; /* Compteur de l'index courant */

	if (head == NULL) /* Si la liste est vide */
		return (NULL); /* Il n'y a aucun nœud à retourner */

	current = head; /* On part de la tête de la liste */
	count = 0; /* On initialise le compteur à 0 */

	/* On parcourt la liste jusqu'à la fin (NULL) */
	while (current != NULL)
	{
		if (index == count) /* Si on est arrivé à l'index recherché */
		{
			return (current); /* On retourne le nœud courant */
		}
		current = current->next; /* On avance au nœud suivant */
		count++; /* On incrémente le compteur d'index */
	}

	return (NULL); /* L'index dépasse la taille de la liste */
}
#include "lists.h"

/**
 * dlistint_len - Retourne le nombre d'éléments d'une liste doublement chaînée
 * @h: Pointeur vers la tête de la liste
 *
 * Return: Le nombre de nœuds dans la liste
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t compt; /* Compteur du nombre de nœuds parcourus */

	compt = 0; /* On initialise le compteur à 0 */

	/* On parcourt la liste nœud par nœud jusqu'à la fin (NULL) */
	while (h != NULL)
	{
		h = h->next; /* On avance au nœud suivant */
		compt++; /* On incrémente le compteur à chaque nœud visité */
	}

	return (compt); /* On retourne le nombre total de nœuds */
}
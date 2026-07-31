#include "lists.h"

/**
 * sum_dlistint - Retourne la somme de toutes les données d'une liste dlistint_t
 * @head: Pointeur vers la tête de la liste
 *
 * Return: La somme de toutes les données, ou 0 si la liste est vide
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current; /* Pointeur pour parcourir la liste */
	int sum; /* Somme cumulée des valeurs des nœuds */

	current = head; /* On part de la tête de la liste */
	sum = 0; /* On initialise la somme à 0 */

	/* On parcourt la liste jusqu'à la fin (NULL) */
	while (current != NULL)
	{
		sum += current->n; /* On ajoute la valeur du nœud courant à la somme */
		current = current->next; /* On avance au nœud suivant */
	}

	return (sum); /* On retourne la somme totale */
}
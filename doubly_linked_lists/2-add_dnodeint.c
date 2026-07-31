#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: Pointeur vers un pointeur vers la tête de la liste
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Pointeur vers le nouveau nœud à créer */

	new_node = malloc(sizeof(dlistint_t)); /* Allocation mémoire du nœud */
	if (new_node == NULL) /* Si l'allocation échoue */
		return (NULL); /* On retourne NULL */

	new_node->n = n; /* On stocke la valeur reçue dans le nouveau nœud */
	new_node->prev = NULL; /* Le nouveau nœud devient la tête, donc pas de prev */
	new_node->next = *head; /* Le nouveau nœud pointe vers l'ancienne tête */

	/* Si la liste n'était pas vide, on met à jour le prev de l'ancienne tête */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node; /* Le nouveau nœud devient la nouvelle tête de la liste */

	return (new_node); /* On retourne l'adresse du nouveau nœud */
}
#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t
 * @head: Double pointeur vers la tête de la liste
 * @n: Valeur entière à stocker dans le nouveau nœud
 *
 * Description: Crée un nouveau nœud avec la valeur n et l'ajoute à la fin
 * de la liste doublement chaînée. Si la liste est vide, le nouveau nœud
 * devient la tête. Met à jour correctement les pointeurs prev et next
 * pour une liste doublement chaînée.
 *
 * Return: L'adresse du nœud nouvellement créé, ou NULL si malloc a échoué
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new; /* Pointeur vers le nouveau nœud à créer */
	dlistint_t *last; /* Pointeur pour parcourir jusqu'au dernier nœud */

	new = malloc(sizeof(dlistint_t)); /* Allocation mémoire du nœud */
	if (new == NULL) /* Si l'allocation échoue */
	{
		return (NULL); /* On retourne NULL */
	}

	new->n = n; /* On stocke la valeur reçue dans le nouveau nœud */

	/* Si la liste est vide, le nouveau nœud devient directement la tête */
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL; /* Pas de nœud précédent */
		new->next = NULL; /* Pas de nœud suivant */
		return (new);
	}

	last = *head; /* On part de la tête pour trouver le dernier nœud */

	/* On avance jusqu'à atteindre le dernier nœud (next == NULL) */
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new; /* L'ancien dernier nœud pointe vers le nouveau */
	new->next = NULL; /* Le nouveau nœud est maintenant le dernier */
	new->prev = last; /* Le nouveau nœud pointe vers l'ancien dernier */

	return (new); /* On retourne l'adresse du nouveau nœud */
}

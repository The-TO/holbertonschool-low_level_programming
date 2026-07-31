#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à un index donné
 * d'une liste dlistint_t
 * @head: Double pointeur vers la tête de la liste
 * @index: Index du nœud à supprimer, en commençant à 0
 *
 * Return: 1 si la suppression a réussi, -1 en cas d'échec
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current; /* Pointeur pour parcourir la liste */
	unsigned int count = 0; /* Compteur pour se déplacer jusqu'à l'index */

	if (head == NULL || *head == NULL) /* Si la liste est invalide ou vide */
	{
		return (-1); /* On ne peut rien supprimer */
	}

	current = *head; /* On part de la tête de la liste */

	/* On avance jusqu'au nœud correspondant à l'index recherché */
	while (current != NULL)
	{
		if (index == count) /* Si on est arrivé à l'index recherché */
		{
			break; /* On arrête la boucle, current pointe sur le bon nœud */
		}
		current = current->next; /* On avance au nœud suivant */
		count++; /* On incrémente le compteur */
	}

	if (current == NULL) /* Si l'index dépasse la taille de la liste */
	{
		return (-1); /* La suppression échoue */
	}

	if (index == 0) /* Cas particulier : suppression de la tête de liste */
	{
		*head = current->next; /* La tête devient le nœud suivant */
		if (*head != NULL) /* Si la liste n'est pas devenue vide */
		{
			(*head)->prev = NULL; /* La nouvelle tête n'a plus de prev */
		}
		free(current); /* On libère l'ancien nœud de tête */
		return (1); /* Suppression réussie */
	}

	/* Cas général : on relie le nœud précédent au nœud suivant */
	current->prev->next = current->next;
	if (current->next != NULL) /* Si le nœud supprimé n'est pas le dernier */
		current->next->prev = current->prev; /* On relie aussi le prev */

	free(current); /* On libère le nœud supprimé */
	return (1); /* Suppression réussie */
}
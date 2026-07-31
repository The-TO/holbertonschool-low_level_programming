#include "lists.h"

/**
 * free_dlistint - Libère une liste dlistint_t
 * @head: Pointeur vers la tête de la liste
 *
 * Description: Parcourt toute la liste doublement chaînée et libère
 * la mémoire allouée de chaque nœud. Il faut sauvegarder le pointeur
 * next avant de libérer chaque nœud, sinon on perd la référence pour
 * continuer le parcours.
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* Pointeur temporaire pour sauvegarder le nœud suivant */

	/* On parcourt la liste jusqu'à la fin (NULL) */
	while (head != NULL)
	{
		tmp = head->next; /* On sauvegarde l'adresse du nœud suivant */
		free(head); /* On libère le nœud courant */
		head = tmp; /* On avance au nœud suivant sauvegardé */
	}
}
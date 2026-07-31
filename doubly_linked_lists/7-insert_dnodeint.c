#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à un index donné
 * @h: Double pointeur vers la tête de la liste
 * @idx: Index où insérer le nouveau nœud
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node; /* Pointeur vers le nouveau nœud à créer */
	dlistint_t *prev_node; /* Pointeur vers le nœud précédant l'index */
	dlistint_t *next_node; /* Pointeur vers le nœud suivant l'index */
	unsigned int count; /* Compteur pour se déplacer jusqu'à l'index */

	if (h == NULL) /* Si le double pointeur est invalide */
		return (NULL); /* On ne peut rien insérer */

	if (idx == 0) /* Cas particulier : insertion en tête de liste */
		return (add_dnodeint(h, n));

	prev_node = *h; /* On part de la tête pour atteindre le nœud précédent */
	count = 0; /* On initialise le compteur à 0 */

	/* On avance jusqu'au nœud juste avant l'index recherché */
	while (prev_node != NULL && count < idx - 1)
	{
		prev_node = prev_node->next; /* On avance au nœud suivant */
		count++; /* On incrémente le compteur */
	}

	if (prev_node == NULL) /* Si l'index dépasse la taille de la liste */
		return (NULL); /* On ne peut pas insérer */

	if (prev_node->next == NULL) /* Si on est arrivé au dernier nœud */
		return (add_dnodeint_end(h, n)); /* On insère simplement à la fin */

	new_node = malloc(sizeof(dlistint_t)); /* Allocation mémoire du nœud */
	if (new_node == NULL) /* Si l'allocation échoue */
		return (NULL); /* On retourne NULL */

	next_node = prev_node->next; /* On sauvegarde le nœud suivant l'index */

	new_node->n = n; /* On stocke la valeur reçue dans le nouveau nœud */
	new_node->next = next_node; /* Le nouveau nœud pointe vers le nœud suivant */
	new_node->prev = prev_node; /* Le nouveau nœud pointe vers le nœud précédent */
	prev_node->next = new_node; /* Le nœud précédent pointe vers le nouveau nœud */
	next_node->prev = new_node; /* Le nœud suivant pointe vers le nouveau nœud */

	return (new_node); /* On retourne l'adresse du nouveau nœud */
}
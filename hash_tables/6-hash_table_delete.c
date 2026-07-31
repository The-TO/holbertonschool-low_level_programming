#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Supprime une table de hachage
 * @ht: Table de hachage
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i; /* Index de parcours du tableau de la table */
	hash_node_t *node; /* Nœud courant dans la chaîne de collision */
	hash_node_t *tmp; /* Pointeur temporaire pour sauvegarder le nœud suivant */

	if (!ht) /* Si la table est invalide */
	{
		return; /* On ne fait rien */
	}

	/* On parcourt chaque case du tableau de la table de hachage */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i]; /* On part du premier nœud de la case courante */

		/* On libère tous les nœuds de la chaîne de collision de cette case */
		while (node)
		{
			tmp = node->next; /* On sauvegarde l'adresse du nœud suivant */
			free(node->key); /* On libère la clé dupliquée */
			free(node->value); /* On libère la valeur dupliquée */
			free(node); /* On libère le nœud lui-même */
			node = tmp; /* On avance au nœud suivant sauvegardé */
		}
	}

	free(ht->array); /* On libère le tableau de pointeurs de la table */
	free(ht); /* On libère la structure de la table elle-même */
}
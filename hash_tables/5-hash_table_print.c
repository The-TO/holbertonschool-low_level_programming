#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Affiche une table de hachage
 * @ht: Table de hachage
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i; /* Index de parcours du tableau de la table */
	hash_node_t *node; /* Nœud courant dans la chaîne de collision */
	int prems = 1; /* Indique si c'est le premier élément affiché (pour la virgule) */

	if (!ht) /* Si la table est invalide */
	{
		return; /* On ne fait rien */
	}

	printf("{"); /* Ouverture de l'affichage façon dictionnaire */

	/* On parcourt chaque case du tableau de la table de hachage */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i]; /* On part du premier nœud de la case courante */

		/* On parcourt la chaîne de collision de cette case */
		while (node)
		{
			if (!prems) /* Si ce n'est pas le premier élément affiché */
			{
				printf(", "); /* On ajoute une virgule avant le suivant */
			}
			printf("'%s': '%s'", node->key, node->value); /* Affichage clé/valeur */
			prems = 0; /* Les éléments suivants ne sont plus les premiers */
			node = node->next; /* On avance au nœud suivant de la chaîne */
		}
	}

	printf("}\n"); /* Fermeture de l'affichage façon dictionnaire */
}
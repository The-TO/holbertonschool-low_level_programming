#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Récupère la valeur associée à une clé
 * @ht: Table de hachage
 * @key: Clé à rechercher
 *
 * Return: La valeur associée à la clé, ou NULL si la clé n'est pas trouvée
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index; /* Index calculé de la clé dans le tableau */
	hash_node_t *cur; /* Nœud courant pour parcourir la chaîne de collision */

	/* On vérifie que les paramètres sont valides et que la clé n'est pas vide */
	if (!ht || !key || key[0] == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size); /* Calcul de l'index */
	cur = ht->array[index]; /* On part du premier nœud de la case du tableau */

	/* On parcourt la chaîne de collision à la recherche de la clé */
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0) /* Si la clé correspond */
		{
			return (cur->value); /* On retourne la valeur associée */
		}
		cur = cur->next; /* On avance au nœud suivant de la chaîne */
	}

	return (NULL); /* La clé n'a pas été trouvée dans la table */
}
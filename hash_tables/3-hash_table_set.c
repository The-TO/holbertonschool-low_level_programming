#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Ajoute un élément à la table de hachage
 * @ht: Table de hachage
 * @key: Chaîne clé (ne doit pas être vide)
 * @value: Chaîne valeur
 *
 * Return: 1 en cas de succès, 0 en cas d'échec
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* Index calculé de la clé dans le tableau */
	hash_node_t *node, *cur; /* Nouveau nœud et nœud courant du parcours */
	char *dup_value, *dup_key; /* Copies allouées de la clé et de la valeur */

	/* On vérifie que les paramètres sont valides et que la clé n'est pas vide */
	if (!ht || !key || key[0] == '\0' || !value)
	return (0);
	index = key_index((const unsigned char *)key, ht->size); /* Calcul de l'index */

	cur = ht->array[index]; /* On part du premier nœud de la case du tableau */

	/* On parcourt la chaîne de collision pour voir si la clé existe déjà */
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0) /* Si la clé correspond déjà */
		{
			dup_value = strdup(value); /* On duplique la nouvelle valeur */
			if (!dup_value) /* Si la duplication échoue */
			{
				return (0); /* On échoue sans rien modifier */
			}
			free(cur->value); /* On libère l'ancienne valeur */
			cur->value = dup_value; /* On remplace par la nouvelle valeur */
			return (1); /* Mise à jour réussie */
		}
		cur = cur->next; /* On avance au nœud suivant de la chaîne */
	}

	/* La clé n'existe pas encore : on crée un nouveau nœud */
	node = malloc(sizeof(hash_node_t)); /* Allocation du nouveau nœud */
	if (!node) /* Si l'allocation échoue */
	{
		return (0); /* On échoue */
	}

	dup_key = strdup(key); /* On duplique la clé */
	if (!dup_key) /* Si la duplication échoue */
	{
		free(node); /* On libère le nœud déjà alloué */
		return (0); /* On échoue */
	}

	dup_value = strdup(value); /* On duplique la valeur */
	if (!dup_value) /* Si la duplication échoue */
	{
		free(dup_key); /* On libère la clé déjà dupliquée */
		free(node); /* On libère le nœud déjà alloué */
		return (0); /* On échoue */
	}

	node->key = dup_key; /* On affecte la clé dupliquée au nœud */
	node->value = dup_value; /* On affecte la valeur dupliquée au nœud */
	node->next = ht->array[index]; /* Le nouveau nœud pointe vers l'ancien premier */
	ht->array[index] = node; /* Le nouveau nœud devient le premier de la case */

	return (1); /* Ajout réussi */
}
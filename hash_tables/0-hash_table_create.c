#include "hash_tables.h"
#include "stdlib.h"

/**
 * hash_table_create - Crée une table de hachage
 * @size: Taille de la table
 *
 * Return: La table créée, ou NULL en cas d'échec
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht; /* Pointeur vers la table de hachage à créer */

	ht = malloc(sizeof(hash_table_t)); /* Allocation de la structure table */
	if (ht == NULL) /* Si l'allocation échoue */
	{
		return (NULL); /* On retourne NULL */
	}

	ht->size = size; /* On enregistre la taille de la table */

	/* On alloue le tableau de pointeurs, initialisé à NULL grâce à calloc */
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL) /* Si l'allocation du tableau échoue */
	{
		free(ht); /* On libère la structure déjà allouée */
		return (NULL); /* On retourne NULL */
	}

	return (ht); /* On retourne la table de hachage créée */
}
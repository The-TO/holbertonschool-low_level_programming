#include "hash_tables.h"

/**
 * hash_djb2 - Implémentation de l'algorithme de hachage djb2
 * @str: Chaîne de caractères utilisée pour générer la valeur de hachage
 *
 * Return: La valeur de hachage
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash; /* Valeur de hachage en cours de calcul */
	int c; /* Caractère courant de la chaîne */

	hash = 5381; /* Valeur initiale classique de l'algorithme djb2 */

	/* On parcourt la chaîne caractère par caractère jusqu'au '\0' */
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c comme vu en exemple video*/
	}

	return (hash); /* On retourne la valeur de hachage calculée */
}
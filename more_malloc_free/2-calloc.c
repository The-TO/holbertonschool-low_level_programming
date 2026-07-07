#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 *
 * Description: Allocates memory for an array of nmemb elements of size bytes
 * each. The allocated memory is initialized to zero. If nmemb or size is 0,
 * or if malloc fails, the function returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalsize; /* taille totale en octets à allouer */
	unsigned int i;         /* index pour la boucle de mise à zéro */
	char *tabl;              /* char* pour pouvoir écrire octet par octet (comme memset) */

	/* La vraie fonction calloc() de la libc retourne NULL si nmemb ou size */
	/* vaut 0 (comportement défini par la norme), donc on reproduit ça ici */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* On calcule la taille totale nous-mêmes, contrairement à malloc simple */
	totalsize = nmemb * size;

	tabl = malloc(totalsize);
	if (tabl == NULL)
	{
		return (NULL);
	}

	/* La différence essentielle avec malloc : ici on initialise chaque */
	/* octet à 0, alors que malloc laisse la mémoire "sale" (valeurs random) */
	for (i = 0 ; i < totalsize ; i++)
	{
		tabl[i] = 0;
	}

	return (tabl);
}
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
	unsigned int totalsize;
	unsigned int i;
	char *tabl;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalsize = nmemb * size;
	tabl = malloc(totalsize);
	if (tabl == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < totalsize ; i++)
	{
		tabl[i] = 0;
	}
	return (tabl);
}

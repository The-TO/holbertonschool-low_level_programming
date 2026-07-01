#include "main.h"
#include <stdio.h>

/**
 *  _strcpy - print print a array in a different destinaiton
 *
 * @dest: is wherer we want to print our string
 *
 * @src: is the source od ou string
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

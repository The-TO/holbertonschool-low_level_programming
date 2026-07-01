#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: 0 (Succes)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int s;

	for (i = 0 ; dest[i] != '\0' ; i++)
	;
	for (s = 0 ; src[s] != '\0' ; s++)
	{
		dest[i] = src[s];
		i++;
	}
	return (dest);
}

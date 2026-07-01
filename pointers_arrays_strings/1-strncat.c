#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 *
 * @dest: The destination string
 *
 * @src: The source string to append
 *
 * @n: Maximum number of bytes to use from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i;
    int s;
	for (i = 0 ; dest[i] != '\0' ; i++)
	;
	for (s = 0 ; src[s] != '\0' && s < n ; s++)
	{
		dest[i] = src[s];
		i++;
        dest[i] = '\0';
	}
	return (dest);

}
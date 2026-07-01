#include "main.h"

/**
 * _strncpy - Copy max n bytes
 * @dest: point tu buffer
 * @src: point to source
 * @n: nom of max bytes
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);

}

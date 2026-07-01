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
	int fini;

	for (i = 0 ; i < n ; i++)
	{
		fini = 0
		if (fini == 0 && src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			fini = 1;
		}
	}
	return (dest);

}

#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing bytes to find
 *
 * Return: A pointer to the first byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int j;
	int trouver;

	i = 0;
	while (s[i] != '\0')
	{
		trouver = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				trouver = 1;
			}
			j++;
		}
		if (trouver == 1)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

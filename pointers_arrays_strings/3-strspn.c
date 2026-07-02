#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing accepted characters
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int trouver;
	int compteur;

	compteur = 0;
	i = 0;
	while (s[i] != '\0')
	{
		trouver = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			trouver = 1;
			j++;
		}
		if (trouver == 1)
		{
			compteur++;
			i++;
		}
		else
		{
			return (compteur);
		}
	}
	return (0);
}

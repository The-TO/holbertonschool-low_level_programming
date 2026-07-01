#include "main.h"

/**
 * _strcmp - Compare s1 and  s2
 *
 * @s1: La première chaîne à comparer.
 * @s2: La deuxième chaîne à comparer.
 *
 * Return: Un entier indiquant la relation entre les chaînes
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] ; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}

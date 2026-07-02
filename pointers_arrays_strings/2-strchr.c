#include <stdio.h>

/**
 * _strchr - Trouve la première occurrence d'un caractère dans une chaîne
 * @s: Pointeur sur la chaîne à parcourir
 * @c: Le caractère à localiser
 *
 * Return: Pointeur vers le caractère trouvé, ou NULL si absent
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}

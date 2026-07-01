#include "main.h"

/**
 * string_toupper - Convert all caracter from uppercase to lowercase
 *
 * @s: Pointeur vers la chaîne de caractères qui sera modifiée in-place.
 *
 * Return: Pointeur vers la chaîne de caractères modifiée.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (0);
}

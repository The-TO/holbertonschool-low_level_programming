#include "main.h"

/**
 * cap_string - Met en majuscule
 * @s: Pointeur vers la chaîne de caractères à modifier.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			if (s[i - 1] == ' ' ||
				s[i - 1] == '\n' ||
				s[i - 1] == '\t' ||
				s[i - 1] == ',' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == ('}') ||
				s[i - 1] == (';'))
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}


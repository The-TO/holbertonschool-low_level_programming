#include "main.h"

/**
 * leet - Encode une chaîne de caractères en “leet” (1337).
 * @s: Pointeur vers la chaîne à encoder.
 *
 * Cette fonction parcourt la chaîne et remplace certaines lettres
 * par des chiffres selon le style “leet”.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */

char *leet(char *s)
{
	int i;
	int j;
	char alpha[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		j = 0;
		for (j = 0 ; alpha[j] != '\0' ; j++)
		if (s[i] == alpha[j])
		{
			s[i] = code[j];
		}
	}
	return (s);
}


#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 *
 * Alloue une nouvelle chaîne contenant les caractères de s1
 * suivis des caractères de s2. Si s1 ou s2 est NULL, elle est
 * traitée comme une chaîne vide.
 *
 * Return: Pointeur vers la nouvelle chaîne allouée, NULL en cas d'erreur
 */
char *str_concat(char *s1, char *s2)
{
	int i, i2;
	char *combi;
	int bcl;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	while (s2[i2] != '\0')
	{
		i2++;
	}
	combi = malloc((i + i2 + 1) * sizeof(char));
	if (combi == NULL)
	{
		return (NULL);
	}
	for (bcl = 0 ;  bcl < i ; bcl++)
	{
		combi[bcl] = s1[bcl];
	}
	for (bcl = 0 ; bcl < i2 ; bcl++)
	{
		combi[i + bcl] = s2[bcl];
	}
	combi[i + i2] = '\0';
	return (combi);
}

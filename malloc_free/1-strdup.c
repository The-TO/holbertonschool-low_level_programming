#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplique une chaîne de
 * caractères dans une nouvelle zone mémoire
 * @str: La chaîne à dupliquer
 *
 * Return: Un pointeur vers la chaîne dupliquée, ou NULL si str est NULL
 * ou si l'allocation mémoire échoue
 */
char *_strdup(char *str)
{
	char *copie;
	int i, bcl;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	copie = malloc((i + 1) * sizeof(char));
	if (copie == NULL)
	{
		return (NULL);
	}
	for (bcl = 0 ; bcl < i ; bcl++)
	{
		copie[bcl] = str[bcl];
	}
	copie[bcl] = '\0';
	return (copie);
}
	


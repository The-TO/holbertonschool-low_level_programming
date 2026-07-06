#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Creates a newly allocated duplicate of a string.
 * @str: Pointer to the string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicate string.
 * Returns NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)  /*str: pointeur vers la chaîne source à dupliquer*/ 
{
	char *copie;  /* Pointeur vers la nouvelle chaîne (la copie)*/
	int i, bcl;   /*bcl: compteur de boucle, i: longueur de la chaîne*/ 

	/* Vérifie que la chaîne passée en paramètre existe */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calcule la longueur de la chaîne */
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	/* Alloue suffisamment de mémoire pour la copie (+1 pour '\0') */
	copie = malloc((i + 1) * sizeof(char)); /*Alloue de la mémoire : 'i' caractères + 1 espace pour le '\0' final*/
	if (copie == NULL)
	{
		return (NULL);
	}

	/* Copie chaque caractère dans la nouvelle zone mémoire */
	for (bcl = 0; bcl < i; bcl++)
	{
		copie[bcl] = str[bcl];
	}

	/* Ajoute le caractère de fin de chaîne */
	copie[bcl] = '\0';

	/* Retourne le pointeur vers la nouvelle chaîne */
	return (copie);
}
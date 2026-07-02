#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
/*Fonction qui cherche la première occurrence de needle dans haystack*/ 
{
	unsigned int i;   /* position de départ testée dans haystack */
	unsigned int j;   /* position dans needle, pour la comparaison */

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		/* tant qu'on n'a pas atteint la fin de needle
		   ET que les caractères correspondent encore... */
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++; // Parcourt needle et haystack en parallèle
		}
		/* si on est sorti de la boucle PARCE QUE needle est fini
		   (donc tous les caractères ont matché), on a trouvé ! */
		if (needle[j] == '\0')
		{
			return (&haystack[i]); // Si fin de needle atteinte, retourne pointeur
		}
		i++; // Passe au caractère suivant
	}
	return (NULL);
}

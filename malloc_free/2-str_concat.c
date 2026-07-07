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
	int i, i2;      /* longueurs de s1 et s2 */
	char *combi;    /* future chaîne concaténée, allouée dynamiquement */
	int bcl;        /* variable de boucle réutilisée pour copier s1 puis s2 */

	/* Sécurité : évite un crash (segfault) si on essaie de lire un NULL plus bas */
	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	/* 1er passage : on mesure s1 nous-mêmes (équivalent de strlen) */
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	/* Même chose pour s2 */
	i2 = 0;
	while (s2[i2] != '\0')
	{
		i2++;
	}

	/* On alloue exactement la taille nécessaire : s1 + s2 + le '\0' final */
	combi = malloc((i + i2 + 1) * sizeof(char));
	if (combi == NULL)
	{
		return (NULL); /* malloc a échoué, on ne peut rien construire */
	}

	/* On copie s1 tel quel au début de combi */
	for (bcl = 0 ;  bcl < i ; bcl++)
	{
		combi[bcl] = s1[bcl];
	}

	/* On colle s2 juste après, d'où le décalage "i + bcl" */
	for (bcl = 0 ; bcl < i2 ; bcl++)
	{
		combi[i + bcl] = s2[bcl];
	}

	/* On termine la chaîne, sinon printf/puts liraient de la mémoire au hasard */
	combi[i + i2] = '\0';

	return (combi);
}
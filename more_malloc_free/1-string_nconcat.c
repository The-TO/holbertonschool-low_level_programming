#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to concatenate
 *
 * Description: This function concatenates two strings. It returns a pointer
 * to a newly allocated space in memory, which contains s1 followed by the
 * first n bytes of s2, and null terminated. If n is greater than or equal
 * to the length of s2, the entire string s2 is used. If NULL is passed,
 * it is treated as an empty string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lenght; /* longueurs de s1, s2, et longueur finale du résultat */
	unsigned int i, i2;              /* i parcourt result/s1, i2 parcourt s2 */
	char *result;

	/* Sécurité NULL, comme dans str_concat */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Mesure manuelle de s1 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	/* Mesure manuelle de s2 */
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Ici c'est la vraie logique de la fonction : on ne copie de s2 */
	/* que "n" caractères, sauf si n dépasse la taille réelle de s2, */
	/* auquel cas on plafonne à len2 (sinon on lirait hors des bornes de s2) */
	if (n >= len2)
		lenght = len1 + len2;
	else
		lenght = len1 + n;

	/* Allocation exacte : s1 + (n ou len2) + le '\0' final */
	result = malloc((lenght + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copie de s1 en entier dans result */
	for (i = 0 ; s1[i] != '\0'; i++)
		result[i] = s1[i];

	/* Puis on complète avec des caractères de s2, jusqu'à atteindre "lenght" */
	/* (qui vaut soit len1+len2, soit len1+n, calculé juste au-dessus) */
	i2 = 0;
	while (i < (unsigned int)lenght)
	{
		result[i] = s2[i2];
		i++;
		i2++;
	}

	result[i] = '\0';
	return (result);
}
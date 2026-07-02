#include <stdio.h>

/**
 * _memset - Remplit la mémoire avec une constante donnée.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Valeur constante à copier
 * dans la mémoire (interprétée comme un char).
 * @n: Nombre d’octets de la mémoire à remplir.
 *
 * Description: Cette fonction remplit
 * les `n` premiers octets
 * de la zone mémoire pointée par `s` avec la valeur constante `b`.
 *
 * Return: Un pointeur vers la zone mémoire `s`.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

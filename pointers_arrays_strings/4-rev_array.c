#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse reverse the content of an array
 * @a: Pointeur vers le tableau d'entiers
 * @n: Le nombre d'éléments dans le tableau
 *
 *
 * Return: void (Aucun retour)
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start;
	int end = n - 1;

	for (start = 0 ; start < end ; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}

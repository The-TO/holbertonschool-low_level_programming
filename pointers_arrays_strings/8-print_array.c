#include "main.h"
#include <stdio.h>

/**
 *  print_array - print number in a array
 *
 * @a: is the value in the string
 *
 * @n: is the number of
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
	{
		printf(", ");
	}
	 i++;
	}
	printf("\n");

}

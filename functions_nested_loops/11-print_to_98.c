#include "main.h"
#include<stdio.h>
/**
 *print_to_98 - work to make a code to print all intager until 98
 *
 * @n: the value to change
 *
 *Return: 0 (Succes)
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", n);

}

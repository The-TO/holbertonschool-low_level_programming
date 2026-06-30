#include "main.h"
/**
 * swap_int - is a fonction that swap the value of a and b
 *
 * @a: is the first value
 *
 * @b: is the second value
 *
 * Return: 0 (Succes)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

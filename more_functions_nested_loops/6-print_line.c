#include "main.h"
/**
 * print_line - is a fonction print number on 14 lines
 *
 * @n: is the number of line we want to print
 *
 * Return: 0 (Succes)
 */
void print_line(int n)
{
	int l;

	for (l = 1 ; l < n; l++)
	{
		_putchar ('_');
	}
	_putchar('\n');
}

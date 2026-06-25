#include "main.h"
/**
 * print_diagonal - is a fonction print number on 14 lines
 *
 * @n: is the number of line we want to print
 *
 * Return: 0 (Succes)
 */
void print_diagonal(int n)
{
	int line;
	int space;

	line = 0;
	while (line < n)
	{
		space = 0;
		while (space <= line)
		{
			_putchar (' ');
		space++;
		}
		_putchar ('\\');
		_putchar ('\n');
		line++;
	}
}

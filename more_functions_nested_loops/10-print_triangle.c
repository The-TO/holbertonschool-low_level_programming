#include "main.h"
/**
 * print_triangle - draws triangle with #
 * @size: number #
 */
void print_triangle(int size)
{
	int line;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1 ; line <= size ; line++)
		{
			for (space = 0 ; space < size - line ; space++)
			{
				_putchar(' ');
			}
			for (hash = 0 ; hash < line ; hash++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}

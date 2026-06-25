#include "main.h"
/**
 * print_most_numbers - is a fonction print number but not some
 *
 * Return: 0 (Succes)
 */
void print_most_numbers(void)
{
	int number = 0;

	while (number <= 9)
	{
		if (number != 2 && number != 4)
		{
			_putchar (number + '0');
		}
		number++;
	}
_putchar ('\n');
}

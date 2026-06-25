#include "main.h"
/**
 * print_numbers - is a fonction to print number from 0 to 9
 *
 * Return: 0 (Succes)
 */
void print_numbers(void)
{
int number = 0;

	while (number <= 9)
	{
		_putchar (number + '0');
		number++;
	}
	_putchar('\n');

}

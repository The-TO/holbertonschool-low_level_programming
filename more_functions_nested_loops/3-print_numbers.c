#include "main.h"
/**
 * print_numbers - is a fonction make to multiple two int
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

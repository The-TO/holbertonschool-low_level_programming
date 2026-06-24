#include "main.h"
/**
 * _sign - is a fonction to print sign of a number
 *
 * @n: is the character variable
 *
 * Return: 0 (Succes)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

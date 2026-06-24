#include "main.h"
/**
 * print_last_digit - command to pritn the last digit of a number
 *
 * @n:
 *
 * Return: 0 (Succes)
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n= n * -1;
	}
	_putchar (n + '0');
	return (n);
}

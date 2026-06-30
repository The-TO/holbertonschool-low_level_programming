#include "main.h"

/**
 * puts_half - print only pair number
 *
 * @str: is the value in the string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int start;

	for (i = 0 ; str[i] != '\0' ; i++)
	{}
	if (i % 2 == 0)
	{
		start = i / 2;
	}
	else
	{
		start = (i + 1) / 2;
	}
	for (; start != i; start++)
	{
		_putchar(str[start]);
	}
	_putchar ('\n');

}

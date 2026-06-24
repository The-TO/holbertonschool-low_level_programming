#include "main.h"
/**
 *  print_alphabet - code for print alphabet with my proper putchar
 *
 * Return: 0 (Succes)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;

	}
	_putchar ('\n');
}

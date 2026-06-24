#include <stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - code to print alphabet 10 times
 *
 * Return: 0 (Succes)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;
while (i <= 9)
{			letter = 'a';

	while (letter <= 'z')
	{
		_putchar (letter);
		if (letter == 'z')
		{
			_putchar ('\n');
		}
		letter++;

	}
i++;
}

}

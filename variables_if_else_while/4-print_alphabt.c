#include <stdio.h>
/**
 * main - code for print alphabet with e and q
 *
 * Return: 0 (Succes)
 *
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
	letter++;
	}

putchar('\n');

	return (0);

}

#include<stdio.h>
/**
 * main - code to print reversed alphabet
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

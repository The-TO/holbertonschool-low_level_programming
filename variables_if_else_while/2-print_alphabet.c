#include<stdio.h>
/**
 * main - code for print alphabet character with putchar
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter += 1;

	}
	putchar('\n');
	return (0);
}

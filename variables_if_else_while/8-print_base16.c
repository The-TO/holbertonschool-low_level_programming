#include<stdio.h>
/**
 * main - code to print number  with base 16
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

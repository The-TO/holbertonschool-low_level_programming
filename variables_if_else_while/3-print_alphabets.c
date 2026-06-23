#include<stdio.h>
/**
 * main - Code to print alphabet in lower and uppercase
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	char letter = 'a';
	char letter2 = 'A';

	while (letter <= 'z')
	{
		putchar (letter);
		letter++;

	}

	while (letter2 <= 'Z')
	{
		putchar (letter2);
		letter2++;

	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
/**
 * main - code for print all possible combinaison of single digit
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');

	if (number != 9)
	{
		putchar(',');
		putchar(' ');
	}

	number++;
	}
	putchar('\n');
	return (0);
}

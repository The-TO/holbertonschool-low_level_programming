#include<stdio.h>
/**
 * main - code C for print numbers
 *
 * Return: 0 (Succes)
 *
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}

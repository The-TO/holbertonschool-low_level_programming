#include<stdio.h>
/**
 * main - FizzBuzz test
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int number;

	for (number = 1 ; number <= 100 ; number++)
	{
		if (number != 1)
		{
			printf(" ");
		}
		if (number % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d",number);

		}
	}
	printf("\n");
	return (0);
}

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d est positif\n ", n);

	}
	else if (n == 0)

	{
		printf("%d is 0\n");

	}
	else
	{

		printf("%d est negatif\n" , n);

	}

	return (0);
}

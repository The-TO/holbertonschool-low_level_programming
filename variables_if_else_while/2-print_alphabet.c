#include<stdio.h>

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

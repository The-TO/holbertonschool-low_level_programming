#include "main.h"

/**
 * rev_string - print the string reversed
 *
 * @s: is the value of the string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int start;
	int end;

	for (i = 0 ; s[i] != '\0' ; i++)
	{}
	i--;
	end = i;
	for (start = 0 ; start < end ; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

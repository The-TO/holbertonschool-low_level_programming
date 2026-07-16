#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given separator
 * @separator: The string to use as separator between numbers
 * @n: The number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int numb;
	unsigned int i;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		numb = va_arg(args, int);
		printf("%d", numb);
	}
	va_end(args);
	printf("\n");
}

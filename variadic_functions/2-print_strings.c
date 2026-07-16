#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Description: Prints n strings followed by a new line.
 * If separator is NULL, it is not printed.
 * If a string is NULL, it prints "(nil)" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *strg;
	unsigned int i;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		strg = va_arg(args, char *);

		if (strg != NULL)
		{
			printf("%s", strg);
		}
		else
		{
			printf("(nil)");
		}
	}
	va_end(args);
	printf("\n");
}

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
	va_list args;								// liste pour argumlents
	char *strg;									// Pointeur sur chaque string
	unsigned int i;								// Compteur de boucle

	va_start(args, n);							// Initialise la boîte à partir de n
	for (i = 0 ; i < n ; i++)
	{
		if (i != 0 && separator != NULL)		// Affiche le séparateur entre les strings (sauf après la dernière) si il n'est pas null et que i != de 0
		{
			printf("%s", separator);
		}
		strg = va_arg(args, char *);			// Récupère chaque argument (string)

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

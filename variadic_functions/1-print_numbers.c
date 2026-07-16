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
	va_list args;							// Liste pour sauvegarder les arguments
	int numb;								// Stockage de chaque entier
	unsigned int i;							// Compteur pour la boucle

	va_start(args, n);						// Initialise la boîte à partir de n
	for (i = 0 ; i < n ; i++)
	{
		if (i != 0 && separator != NULL)	
		{									// Affiche le séparateur entre les nombres (sauf après le dernier)
			printf("%s", separator);
		}
		numb = va_arg(args, int);			// Récupère chaque argument
		printf("%d", numb);
	}
	va_end(args);							// libere la liste
	printf("\n");							// saut d eligne a la fin
}

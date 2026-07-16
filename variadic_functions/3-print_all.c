#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, depending on the format string.
 * @format: A list of types of arguments passed to the function.
 *
 * Description:
 * Format characters:
 *  'c' : char
 *  'i' : integer
 *  'f' : float
 *  's' : char * (prints "(nil)" if NULL)
 *
 * The function prints each argument according to the format provided.
 * Unsupported format characters are ignored.
 * A comma and space are printed between valid arguments.
 */

void print_all(const char *const format, ...)
{
	va_list args;						// Création d'une liste pour stocker les arguments variables
	unsigned int i;						// Compteur pour parcourir le tableau 'format'
	char c;								// Pour stocker un caractère du format
	char *s;							// Pointeur vers une chaîne de caractères
	char *sep = ", ";					/* Séparateur affiché après chaque élément */

	va_start(args, format);
	i = 0;
	while (format && format[i]).   		//format = quand il ne vaut rien (NULL) et format[i] à une valeur
	{
		c = format[i];
		/* Si c'est le dernier caractère valide du format, pas de séparateur après */
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && format[i + 1] == '\0')
		{
			sep = "";
		}
		switch (c)
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, sep);
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

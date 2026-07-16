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
	va_list args;
	unsigned int i;
	char c;
	char *s;
	int o;

	va_start(args, format);
	i = 0;
	o = 0;
	while (format[i])
	{
		c = format[i];
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's')&& o != 0)
		{
			printf(", ");
			o++;
		}
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

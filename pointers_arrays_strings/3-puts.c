#include "main.h"
/**
 * _puts - is a fonction that print strings
 *
 * @str: is the string to print
 *
 *
 * Return: 0 (Succes)
 */
void _puts(char *str)
{
	int i;

for (i = 0 ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar ('\n');
}

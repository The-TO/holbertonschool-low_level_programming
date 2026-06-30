#include "main.h"
/**
 * _strlen - is a fonction that swap the value of a and b
 *
 * @s: is the first value
 *
 *
 * Return: 0 (Succes)
 */
int _strlen(char *s)
{
	int number;

	for (number = 0 ; s[number] != '\0' ; number++)
	{}
	return (number);
}

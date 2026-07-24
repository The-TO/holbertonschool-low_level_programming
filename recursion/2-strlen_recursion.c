#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: pointer to the string
 *
 * Description: This function calculates the length of a string
 * using recursion. It counts each character until it reaches
 * the null terminator ('\0').
 *
 * Return: The length of the string (int)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{

		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

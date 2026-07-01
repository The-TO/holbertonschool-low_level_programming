#include "main.h"
#include <stdio.h>

/**
 *  print_array - print number in a array
 *
 * @a: is the value in the string
 *
 * @n: is the number of
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
	    dest[i] = src[i];
	    i++;
    }
    dest[i] = src[i];
    return (dest);
}
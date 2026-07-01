#include "main.h"
/**
 * reset_to_98 - is a fonction to rester a var to 98 with pointers
 *
 * @n: is the pointer
 *
 * Return: 0 (Succes)
 */
char *_strcat(char *dest, char *src)
{
    int i;
    int s;
    
    for (i = 0 ; dest[i] != '\0' ; i++)
    ;
    for (s = 0 ; src[s] != '\0' ; s++)
    {
        dest[i] = src[s];
        i++;
    } 
    return (dest);
}
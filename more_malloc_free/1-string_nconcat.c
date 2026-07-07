#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to concatenate
 *
 * Description: This function concatenates two strings. It returns a pointer
 * to a newly allocated space in memory, which contains s1 followed by the
 * first n bytes of s2, and null terminated. If n is greater than or equal
 * to the length of s2, the entire string s2 is used. If NULL is passed,
 * it is treated as an empty string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int len1;
    int len2;
    int lenght;
    unsigned int i, i2;
    char *result;

    if(s1 == NULL)
    {
        s1 = "";
    }
    if(s2 == NULL)
    {
        s2 = "";
    }
    len1 = 0
    while(s1[len1] != '\0')
    {
        len1++;
    }
    len2 = 0
    while(s2[len2] != '\0')
    {
        len2++;
    }
    
    if(n >= len2)
    {
        lenght = len1 + len2;
    }
    else
    {
        lenght = len1 + n;
    }
    result = malloc((lenght + 1) * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }
    

}
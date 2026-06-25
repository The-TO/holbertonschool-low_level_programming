#include "main.h"
/**
 * _isdigit - is a fonction make to check if value is a digit or not
 * 
 * @c: is tha value to check
 * 
 * Return: 0 (Succes)
 */
int _isdigit(int c)
{
    if ( c >= '0' && c <= '9')
    {
        return (1);
    }
    return(0);
}

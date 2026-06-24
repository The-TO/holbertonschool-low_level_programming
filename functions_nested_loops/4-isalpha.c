#include "main.h"
/**
 * _isalpha - work to tell if c is upper or lower case
 *
 * @c: the character to check is c
 *
 *Return: 0 (Succes)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

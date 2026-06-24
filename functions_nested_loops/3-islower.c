#include "main.h"
/**
 * _islower - work for check if c is lower or not
 *
 * @c: _islower  is a number and we want to know if its lower
 *
 * Return: 0 (Succes)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * islower.c work to check if char is lower or not
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

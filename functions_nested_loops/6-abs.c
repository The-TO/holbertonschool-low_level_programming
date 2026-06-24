#include "main.h"
/**
 * _abs - work for create abs command
 *
 *@n: is the variable that will help to put any character
 *
 * Return: 0 (Succes)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

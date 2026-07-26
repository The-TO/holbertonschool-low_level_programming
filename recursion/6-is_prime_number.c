#include <stdio.h>
#include "main.h"

int _prime_helper(int n, int i);
/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime_helper(n, 2));
}
/**
 * _prime_helper - Fonction auxiliaire pourtrouver racinecarrée récursivement
 * @n: Le nombre dont on cherche la racine carrée
 * @i: Le nombre actuel testé
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */

int _prime_helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (_prime_helper(n, i + 1));
}


#include <stdio.h>
#include "main.h"

int _sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - Return la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on veut trouver la racine carrée
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */



int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - Fonction auxiliaire pourtrouver racine carrée récursivement
 * @n: Le nombre dont on cherche la racine carrée
 * @i: Le nombre actuel testé
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */
int _sqrt_helper(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}

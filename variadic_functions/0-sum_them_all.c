#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - Sums all its parameters
 * @n: Number of parameters to sum
 *
 * Return: Sum of all parameters, or 0 if n is 0
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;			// Crée une liste pour accéder aux arguments
	int sum;				// Accumule la somme
	unsigned int i;			// Compteur pour boucler

	if (n == 0)				// Si aucun nombre à additionner
	{
		return (0);
	}
	sum = 0;
	va_start(args, n);				// Initialise la liste à partir de 'n'
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(args, int);	// Récupère chaque argument entier et l'ajoute
	}
	va_end(args);					// Libere la liste
	return (sum);
}

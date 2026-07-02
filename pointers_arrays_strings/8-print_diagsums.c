#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the beginning of the matrix (int array)
 * @size: size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
// Fonction qui affiche la somme des deux diagonales d'une matrice carrée
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++) // Parcourt les lignes de la matrice
	{
		for (j = 0; j < size; j++) // Parcourt les colonnes
		{
			if (i == j)
				sum1 += a[i * size + j]; // Somme de la diagonale principale
			if (i + j == size - 1)
				sum2 += a[i * size + j]; // Somme de la diagonale secondaire
		}
	}
	printf("%d, %d\n", sum1, sum2); // Affiche les deux sommes
}
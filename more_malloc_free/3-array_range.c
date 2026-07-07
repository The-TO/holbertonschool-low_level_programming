#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array containing all integers from min to max
 * @min: First value of the array
 * @max: Last value of the array
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	/* Impossible de créer un tableau si min est supérieur à max */
	if (min > max)
	{
		return (NULL);
	}

	/*
	 * Calcul du nombre d'éléments à stocker.
	 * Exemple :
	 * min = 3, max = 7
	 * Tableau attendu : 3 4 5 6 7
	 * Il y a donc (7 - 3) + 1 = 5 éléments.
	 */
	size = (max - min) + 1;

	/*
	 * Allocation de suffisamment de mémoire pour contenir
	 * "size" entiers.
	 */
	arr = malloc(size * sizeof(int));

	/* Vérifie que malloc a réussi */
	if (arr == NULL)
	{
		return (NULL);
	}

	/*
	 * Remplit le tableau.
	 *
	 * À chaque tour, i représente la position dans le tableau.
	 * On ajoute simplement i à la valeur minimale.
	 *
	 * Exemple :
	 * min = 3
	 *
	 * i = 0 -> arr[0] = 3 + 0 = 3
	 * i = 1 -> arr[1] = 3 + 1 = 4
	 * i = 2 -> arr[2] = 3 + 2 = 5
	 * ...
	 */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	/* Retourne l'adresse du tableau nouvellement créé */
	return (arr);
}
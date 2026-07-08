#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Alloue une grille 2D d'entiers initialisés à 0
 * @width: Nombre de colonnes
 * @height: Nombre de lignes
 *
 * Return: Pointeur vers la grille allouée, NULL en cas d'erreur
 */

int **alloc_grid(int width, int height)
{
	int **grid;  /* tableau de pointeurs : chaque case pointe vers une ligne */
	int i;       /* index de ligne */
	int j;       /* index de colonne, aussi réutilisé pour le nettoyage en cas d'échec */

	/* On refuse les dimensions absurdes avant même de toucher à malloc */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* 1er niveau d'allocation : un tableau de "height" pointeurs (les lignes) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		/* 2e niveau d'allocation : chaque ligne est un tableau de "width" int */
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Échec en cours de route : il faut libérer tout ce qui a déjà */
			/* été alloué AVANT de return, sinon fuite mémoire garantie */
			for (j = 0 ; j < i ; j++)
			free(grid[j]);

			// Libère le "tableau de pointeurs" principal
			free(grid);
			return (NULL); // Signale l'échec
		}

		// Étape 4 (Initialisation) : Met tous les éléments de la ligne 'i' à 0
		for (j = 0; j < width; j++)
			grid[i][j] = 0; // Initialise la cellule [i][j] à 0
	}

	return (grid); // Retourne le pointeur vers la grille 2D complète
}
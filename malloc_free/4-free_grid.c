#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Libère une grille 2D précédemment créée par alloc_grid
 * @grid: Pointeur vers la grille 2D à libérer
 * @height: Nombre de lignes de la grille
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i; /* index de ligne, parcourt chaque tableau de int alloué séparément */

	/* On libère chaque ligne une par une : chacune était un malloc distinct */
	/* dans alloc_grid, donc il faut autant de free() que de lignes */
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	/* Enfin on libère le tableau de pointeurs lui-même (le "conteneur" des lignes) */
	free(grid)
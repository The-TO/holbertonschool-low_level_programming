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
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

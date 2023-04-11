#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * description: frees memory of grid
 *
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}

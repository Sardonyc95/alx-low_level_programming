#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * Description: frees 2d array memory of grid
 * @grid: input param (2d grid)
 * @height: input param (height dimension of grid)
 * Return: nothing (void)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

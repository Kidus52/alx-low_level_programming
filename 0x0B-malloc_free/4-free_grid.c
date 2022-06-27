#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a grid
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		free(grid);

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

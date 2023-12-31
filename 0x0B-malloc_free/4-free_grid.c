#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional
 * grid previously created by the alloc_grid function.
 *
 * Description: function that frees a 2 dimensional
 * grid previously created by the alloc_grid function.
 *
 *@grid: pointer to the two dimensional grid.
 *@height: height of the grid.
 *
 * Return: void.
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

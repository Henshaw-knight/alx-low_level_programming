#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2-D grid previously created by the
 * alloc_grid function
 *
 * @grid: the 2 dimensional grid
 * @height: height or row of the grid
 *
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}

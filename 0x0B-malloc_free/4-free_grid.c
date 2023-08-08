#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: a pointer to the first column of the first row of the array
 * @height: height dimension of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

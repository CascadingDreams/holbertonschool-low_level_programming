#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid previously allocated by alloc_grid
 * @grid: Pointer to the 2D grid
 * @height: Number of rows in the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

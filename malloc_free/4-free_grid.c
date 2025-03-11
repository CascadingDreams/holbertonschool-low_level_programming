#include "main.h"

/**
 * free_grid - frees grid
 * @grid: pointer to grid
 * @height: num of rows in the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

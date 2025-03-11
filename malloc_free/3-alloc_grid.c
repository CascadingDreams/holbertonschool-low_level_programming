#include "main.h"

/**
 * alloc_grid - allocate a grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to pointer of grid
 */
int **alloc_grid(int width, int height)
{
	int **array_pointer;
	int height_count;
	int width_count;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array_pointer = (int **)malloc(sizeof(int *) * height);

	if (array_pointer == NULL)
	{
		return (NULL);
	}

	for (height_count = 0; height_count < height; height_count++)
	{
		array_pointer[height_count] = (int *)malloc(sizeof(int) * width);

		if (array_pointer[height_count] == NULL)
		{
			for (i = 0; i < height_count; i++)
			{
				free(array_pointer[i]);
			}
			free(array_pointer);
			return (NULL);
		}

		for (width_count = 0; width_count < width; width_count++)
		{
			array_pointer[height_count][width_count] = 0;
		}
	}

	return (array_pointer);
}

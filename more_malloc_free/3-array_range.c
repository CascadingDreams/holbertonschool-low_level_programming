#include "main.h"

/**
 * array_range - creates array of ints from min to max
 * @min: starting value
 * @max: ending value
 *
 * Return: ptr to array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

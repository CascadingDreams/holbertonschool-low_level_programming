#include "function_pointers.h"

/**
 * int_index - returns index of the first ele which cmp does not return 0
 * @array: array
 * @size: size of the array
 * @cmp: compares nums in array
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

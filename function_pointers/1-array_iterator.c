#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: the input array
 * @size: size of the array
 * @action: executes a function given as a parameter on each element of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

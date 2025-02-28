#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of ints
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}

}

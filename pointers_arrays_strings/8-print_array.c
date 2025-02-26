#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n elements in an array of integers
 * @a: number of array
 * @n: array element
 *
 * Return: no, void
 */
void print_array(int *a, int n)
{
	int num = 0;

	while (num < n)
	{
		printf("%d", a[num]);
		if (num < n - 1)
		{
			printf(", ");
		}
		num++;
	}

	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals in a matrix.
 * @a : pointer to matrix
 * @size: size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int count = 0;
	int p_sum = 0;
	int s_sum = 0;

	while (count < size)
	{
		p_sum = p_sum + a[count * size + count];
		s_sum = s_sum + a[count * size + (size - 1 - count)];
		count++;
	}
	printf("%d, %d\n", p_sum, s_sum);
}

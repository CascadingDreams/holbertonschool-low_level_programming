#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first int
 * @b: second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

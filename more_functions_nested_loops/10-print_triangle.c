#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: no, void
 */
void print_triangle(int size)
{
	int i = 1;
	int j;
	int spaces;

	while (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		spaces = size - i;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
	_putchar('\n');
	i++;
	}
}

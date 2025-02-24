#include "main.h"

/**
 * print_line - prints line in the terminal
 * @n: number of times printed
 * Return: no, void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

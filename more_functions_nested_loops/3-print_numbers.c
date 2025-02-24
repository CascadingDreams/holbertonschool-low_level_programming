#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Return 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c >= '0' && c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

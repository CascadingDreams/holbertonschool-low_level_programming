#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to convert and print
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8 - 1;
	int printed = 0;

	while (bit >= 0)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		bit--;
	}

	if (!printed)
		_putchar('0');
}

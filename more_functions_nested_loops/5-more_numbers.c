#include "main.h"

/**
 * more_numbers - prints 1 to 14 10x
 *
 * Return: 0
 */
void more_numbers(void)
{
	int l = 0;
	int d;

	while (l < 10)
	{
		d = 0;
		while (d <= 14)
		{
			if (d > 9)
			{
				_putchar('1');
			}
			_putchar((d % 10) + '0');
			d++;
		}
	_putchar('\n');
	l++;
	}
}

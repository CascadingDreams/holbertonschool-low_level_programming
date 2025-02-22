#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * return: no, void
 */
void times_table(void)
{
	int row = 0;
	int col;
	int product;

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			product = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}
			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar((product / 10) + '0');
				_putchar ((product % 10) + '0');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}

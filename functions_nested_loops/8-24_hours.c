#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's day
 *
 * return: no, void
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}

}

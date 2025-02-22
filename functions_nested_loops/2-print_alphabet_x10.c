#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * return: no, void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

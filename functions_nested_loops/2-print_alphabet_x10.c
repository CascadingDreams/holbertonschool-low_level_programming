#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * return: no, void
 */
void print_alphabet(void)
{
	char c = 'a';
	int i = 0;

	while (i < 11)
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

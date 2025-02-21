#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * return: no, void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

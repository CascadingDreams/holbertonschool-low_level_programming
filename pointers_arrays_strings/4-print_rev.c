#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: no, void
 */
void print_rev(char *s)
{
	int fLetter = 0;

	while (s[fLetter] != '\0')
	{
		fLetter++;
	}
	while (fLetter > 0)
	{
		fLetter = fLetter - 1;
		_putchar(s[fLetter]);
	}
	_putchar('\n');
}

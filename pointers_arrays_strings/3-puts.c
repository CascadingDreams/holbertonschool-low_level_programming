#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: the string
 *
 * Return: string
 */
void _puts(char *str)
{
	int fLetter = 0;

	while (str[fLetter] != '\0')
	{
		_putchar(str[fLetter]);
		fLetter++;
	}
	_putchar('\n');
}

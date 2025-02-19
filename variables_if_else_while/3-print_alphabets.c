#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lAlphabet = 'a';
	char uAlphabet = 'A';

	while (lAlphabet <= 'z')
	{
		putchar(lAlphabet);
		lAlphabet++;
	}
	while (uAlphabet <= 'Z')
	{
		putchar(uAlphabet);
		uAlphabet++;
	}

	putchar('\n');
	return (0);
}

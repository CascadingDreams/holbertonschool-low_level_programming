#include <stdio.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers = '0';
	char alphabet = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char zero = 48;

	while (zero <= 57)
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');
	return (0);
}

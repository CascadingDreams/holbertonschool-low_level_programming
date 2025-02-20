#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int zero = '0';
	int nine = '9';

	while (zero <= nine)
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');
	return (0);
}

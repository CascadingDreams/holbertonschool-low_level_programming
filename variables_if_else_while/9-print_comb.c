#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char com = ',';
	char spa = ' ';

	while (num <= '9')
	{
		putchar(num);
		num++;

		if (num < 58)
		{
			putchar(com);
			putchar(spa);
		}
	}
	putchar('\n');
	return (0);
}

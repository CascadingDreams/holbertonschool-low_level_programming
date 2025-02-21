#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the last digit
 *
 * Return: 0
 */
int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;
	_putchar(last_digit = '0');
	return (last_digit);
}



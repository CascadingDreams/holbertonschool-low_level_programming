#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints nums and new line
 * @separator: ' ,' between nums
 * @n : num of args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
	return;

}

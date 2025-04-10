#include "variadic_functions.h"

/**
 * sum_them_all - sums all inputs
 * @n: num of args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);
}

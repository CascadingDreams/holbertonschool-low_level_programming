#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: num1
 * @b: num2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two ints
 * @a: num1
 * @b: num2
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: num1
 * @b: num2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: num1
 * @b: num2
 *
 * Return: division of and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
		return (a / b);
}

/**
 * op_mod - modulo a and b
 * @a: num1
 * @b: num2
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
		return (a % b);
}

#include "main.h"

/**
 * _sqrt_recursion_calc - finds root numbers are the square root of n
 * @n: number
 * @root_num: possible root number
 *
 * Return: root_num, -1
 */
int _sqrt_recursion_calc(int n, int root_num)
{
	if (root_num * root_num == n)
	{
		return (root_num);
	}
	if (root_num * root_num > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_calc(n, root_num + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_calc(n, 0));
}

#include "main.h"

/**
 * check_prime - helper function to check divisibility
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)  /* Base case: if i^2 > n, n is prime */
	{
		return (1);
	}
	if (n % i == 0)  /* If n is divisible by i, it is not prime */
	{
		return (0);
	}
	return (check_prime(n, i + 1));  /* Recurse with the next divisor */
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)  /* Numbers less than or equal to 1 are not prime */
	{
		return (0);
	}
	return (check_prime(n, 2));  /* Start checking from divisor 2 */
}

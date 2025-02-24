#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the character input
 *
 * Return: 1 uppercase, 0 not uppercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

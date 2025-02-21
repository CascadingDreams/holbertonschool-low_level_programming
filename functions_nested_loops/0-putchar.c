#include "main.h"

/**
 * _putchar - writes char c to stdout
 * @c: parameter and character to print
 *
 * Return: 1 on success
 * Error: -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, sizeof(c)));
}

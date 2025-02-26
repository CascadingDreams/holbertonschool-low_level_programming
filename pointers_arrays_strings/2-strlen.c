#include "main.h"

/**
 * _strlen - counts the chars in a string.
 * @s: the pointer to the first character of the string.
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of characters to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int str = 0;

	while (str < n && src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str++;
	}
	return (dest);
}

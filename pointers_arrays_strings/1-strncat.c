#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: m
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;

	while (dest[destl] != '\0')
	{
		destl++;
	}
	while (srcl < n && src[srcl] != '\0')
	{
		dest[destl] = src[srcl];
		srcl++;
		destl++;
	}
	dest[destl] = '\0';
	return (dest);
}

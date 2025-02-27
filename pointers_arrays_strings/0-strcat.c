#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int destLength = 0;
	int sourceLength = 0;

	while (dest[destLength] != '\0')
	{
		destLength++;
	}
	dest[destLength] = '\0';
	while (src[sourceLength] != '\0')
	{
		dest[destLength] = src[sourceLength];
		sourceLength++;
		destLength++;
	}
	return (dest);
}

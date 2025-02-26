#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: no, void
 */
char *_strcpy(char *dest, char *src)
{
	int chNum = 0;

	while (src[chNum] != '\0')
	{
		dest[chNum] = src[chNum];
		chNum++;
	}
	if (src[chNum] == '\0')
	{
		dest[chNum] = '\0';
	}
	return (dest);
}

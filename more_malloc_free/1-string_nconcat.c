#include "main.h"

#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s && s[len])
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: num of bytes
 *
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int lens1;
	unsigned int lens2;
	unsigned int i;
	unsigned int j;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	if (n >= lens2)
	{
		n = lens2;
	}

	concatstr = malloc(sizeof(char) * (lens1 + n + 1));
	if (concatstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lens1; i++)
	{
		concatstr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concatstr[i + j] = s2[j];
	}

	concatstr[i + j] = '\0';
	return (concatstr);
}

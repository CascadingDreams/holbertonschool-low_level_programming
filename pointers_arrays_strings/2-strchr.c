#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: first occurence of character in the string or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

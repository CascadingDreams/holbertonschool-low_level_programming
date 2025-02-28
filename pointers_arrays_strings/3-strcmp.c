#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

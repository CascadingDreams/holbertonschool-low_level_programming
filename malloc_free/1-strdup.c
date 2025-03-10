#include "main.h"
#include <stdio.h>

/**
 * _strlen - reads the length of a string
 * @s: string
 *
 * Return: string count
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strdup - copies string
 * @str: string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i;
	char *a;
	int strlen;

	if (str == NULL)
	{
		return (NULL);
	}

	strlen = _strlen(str);
	a = (char *)malloc(sizeof(char) * strlen + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';

	return (a);
}

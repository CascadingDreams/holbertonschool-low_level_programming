#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int s1_count;
	int s2_count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_count = 0; s1[s1_count] != '\0'; s1_count++)
	{
	}

	for (s2_count = 0; s2[s2_count] != '\0'; s2_count++)
	{
	}

	a = (char *)malloc(sizeof(char) * (s1_count + s2_count + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s1_count; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < s2_count; i++)
	{
		a[s1_count + i] = s2[i];
	}

	a[s1_count + s2_count] = '\0';

	return (a);
}

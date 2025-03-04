#include "main.h"

/**
 * _strspn - writes a function that gets the legth of a prefix substring
 * @s: string
 * @accept: chars
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int counter = 0;
	int c;

	while (s[i] != '\0')
	{
		c = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c = 1;
				counter++;
			}
			j++;
		}
		if (c == 0)
		{
			return (counter);
		}
		i++;
	}
	return (counter);
}

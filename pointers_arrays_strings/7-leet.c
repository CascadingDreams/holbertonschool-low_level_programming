#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: char
 */
char *leet(char *s)
{
	int i = 0;
	int letters[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int numbers[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	/*int letterIndex = 0;*/

	while (s[i] != '\0')
	{
		int letterIndex = 0;

		while (letters[letterIndex] != '\0')
		{
			if (letters[letterIndex] == s[i])
			{
				s[i] = numbers[letterIndex];
			}
			letterIndex++;
		}
		i++;
	}
	return (s);
}

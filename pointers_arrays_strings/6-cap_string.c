#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @str: string
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;
	int specialch[13] = {
		'\n',
		'\t',
		' ',
		',',
		';',
		'.',
		'!',
		'?',
		'"',
		'(',
		')',
		'{',
		'}',
	};
	int j = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		j = 0;
		while (specialch[j] != '\0')
		{
			if (str[i] == specialch[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}

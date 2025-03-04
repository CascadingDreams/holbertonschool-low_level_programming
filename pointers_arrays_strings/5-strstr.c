#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: complete string
 * @needle: substring
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

			while (*h && *n && (*h == *n))
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
			haystack++;
	}
	return (NULL);
}

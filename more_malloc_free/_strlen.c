#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
    unsigned int len = 0;

    while (s && s[len])
    {
        len++;
    }

    return (len);
}

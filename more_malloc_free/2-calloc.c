#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size bytes each
 *
 * Return: pointer to each memory alloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

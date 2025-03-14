#include "main.h"

/**
 * malloc_checked - returns a pointer to the allocated memory.
 * @b: memory
 *
 * Return: pointer or 98 exit.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

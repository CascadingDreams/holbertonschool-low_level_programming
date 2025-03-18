#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: points to functions that accept char * as a parameter.
 * @name: name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	if (f == NULL)
	{
		return;
	}

	f(name);
}

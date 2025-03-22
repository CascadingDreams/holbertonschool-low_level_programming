#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character.
 * @args: The argument list.
 */
void print_char(va_list args) { printf("%c", va_arg(args, int)); }

/**
 * print_int - Prints an integer.
 * @args: The argument list.
 */
void print_int(va_list args) { printf("%d", va_arg(args, int)); }

/**
 * print_float - Prints a float.
 * @args: The argument list.
 */
void print_float(va_list args) { printf("%f", va_arg(args, double)); }

/**
 * print_string - Prints a string.
 * @args: The argument list.
 * If the string is NULL, prints "(nil)".
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything based on format specifiers.
 * @format: A list of argument types.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";
	format_specifier_t specifiers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (specifiers[j].specifier)
		{
			if (format[i] == specifiers[j].specifier)
			{
				printf("%s", separator);
				separator = ", ";
				specifiers[j].print_func(args);
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

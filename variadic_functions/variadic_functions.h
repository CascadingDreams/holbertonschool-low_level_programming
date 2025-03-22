#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct format_specifier - Struct to map format specifiers to functions.
 * @specifier: The format specifier.
 * @print_func: The function to handle the specifier.
 */
typedef struct format_specifier
{
        char specifier;
        void (*print_func)(va_list);
} format_specifier_t;

#endif

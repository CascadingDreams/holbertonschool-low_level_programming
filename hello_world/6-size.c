#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int lIntType;
	long long int llIntType;
	float floType;

	printf("Size of a char: %lu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %lu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lIntType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llIntType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floType));
	return (0);
}

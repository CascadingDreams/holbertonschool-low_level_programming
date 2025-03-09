#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - determines whether a char is a number
 * @str: string
 *
 * Return: 1
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - entry
 * @argc: count
 * @argv: vector
 *
 * Return: sum, or 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for(i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

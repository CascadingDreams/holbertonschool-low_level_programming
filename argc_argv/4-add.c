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
	int first_num, second_num, sum;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	first_num = atoi(argv[1]);
	second_num = atoi(argv[2]);
	sum = first_num + second_num;

	printf("%d\n", sum);
	return (0);
}

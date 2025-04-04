#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the op asked
 * @s: string
 *
 * Return: 0 success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s && s[1] == '\0')
		{
			/*s[1] = '\0';*/
			return (ops[i].f);
		}
		i++;
	}
	return (0);

}

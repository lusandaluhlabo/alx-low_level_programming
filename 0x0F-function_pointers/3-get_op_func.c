#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: operation asked by user
 * Return: pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_r ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

#include "3-calc.h"
#include <string.h>
/**
 * selects the correct function to perform the operation
 * @s: the input value
 *
 * Return: a pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (s && ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		++i;
	}
	return (NULL);
}

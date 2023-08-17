#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the operation
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
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}


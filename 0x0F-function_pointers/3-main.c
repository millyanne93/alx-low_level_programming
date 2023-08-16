#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 * Return: 0 on success, other values on errors.
 */
int main(int argc, char *argv[])
{
	int a_int, b_int, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a_int = atoi(argv[1]);
	b_int = atoi(argv[3]);
	op = argv[2];
	if ((*op == '/' || *op == '%') && b_int == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(op))(a_int, b_int);
	printf("%d\n", result);
	return (0);
}

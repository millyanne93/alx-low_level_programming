#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - returns the sum of a and b
 * @a: input value
 * @b: input value
 * Return: the added value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: the input value
 * @b: the input value
 * Return: the difference value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  returns the product of a and b
 * @a: input value
 * @b: input value
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a: the input value
 * @b the input value
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 * @a: input value
 * @b: input value
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

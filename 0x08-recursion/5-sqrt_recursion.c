#include <stdio.h>

/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	else if (n * n > base)
		return (-1);
	else
		return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number n.
 * @n: The input number.
 * Return: The natural square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (checker(1, n));
}

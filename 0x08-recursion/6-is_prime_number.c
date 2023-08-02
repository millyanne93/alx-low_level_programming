#include <stdio.h>

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to check for divisibility
 * @divisor: the current divisor to check
 * Return: 1 if num is a prime, else return 0 otherwise.
 */
int is_divisible(int num, int divisor)
{
	if (divisor * divisor > num)
		return (1);
	if (num % divisor == 0)
		return (0);
	return (is_divisible(num, divisor + 1));
}

/**
 * is_prime_number - checks if the number is a prime number
 * @n: the number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_divisible(n, 2));
}

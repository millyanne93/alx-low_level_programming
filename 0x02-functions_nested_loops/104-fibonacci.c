#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: 0 Success
 */
int main(void)
{
	int count, limit;
	unsigned long long first = 1, second = 2, next_term;

	limit = 98;

	printf("%llu, %llu", first, second);

	for (count = 3; count <= limit; count++)
	{
		next_term = first + second;
		printf(", %llu", next_term);

		first = second;
		second = next_term;
	}
	printf("\n");
	return (0);
}

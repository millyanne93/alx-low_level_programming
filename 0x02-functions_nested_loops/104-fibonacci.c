#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: 0 Success
 */
int main(void)
{
	int count, limit;
	uint64_t first = 1, second = 2, next_term;

	limit = 98;

	printf("%lu, %lu", first, second);

	for (count = 3; count <= limit; count++)
	{
		next_term = first + second;
		printf(", %lu", next_term);

		first = second;
		second = next_term;
	}
	printf("\n");
	return (0);
}

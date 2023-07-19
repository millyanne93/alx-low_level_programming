#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: The value to generate the times table.
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;

			if (j == 0)
				putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k < 10)
			{
				_putchar(' ');
				_putchar(k / 100 + '0');
				_putchar(k / 10 % 10 + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

#include <stdio.h>
/**
 * main - Entry point of the code
 * Return: 0 (Always succesful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j < 99; j++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(',');
				if (i != 99 || j != 98)
				{
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n1 = 0;
	int c = 0;

	if (s[0] == '-')
	{
		sign = -1;
		c++;
	}
	while (s[c] != '\0')
	{
		if (s[c] >= '0' && s[c] <= '9')
		{
			n1 = (n1 * 10) + (s[c] - '0');
		}
		else if (n1 > 0)
		{
			break;
		}
		c++;
	}
	return (n1 * sign);
}

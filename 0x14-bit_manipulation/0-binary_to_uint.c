#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
		i++;
	}
	return (decimal);
}

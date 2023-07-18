#include "main.h"

/**
 * _abs - Computes the absolute value of a integer
 * @r: The number to be computed
 * Return: Absolute value or zero
 */
int _abs(int r)
{
	if (r < 0)
	{
		int abs_val;

		abs_val = r * -1;
		return (abs_val);
	}
	return (r);
}

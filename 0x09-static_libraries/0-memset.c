#include "main.h"
/**
 * _memset - fill a block of memory with a value
 * @s: address of memory to be filled
 * @b: the input value
 * @n: number of bytes
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

#include <stdio.h>
#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: The main string
 * @accept: The set of bytes
 * Return: 0 (Sucess)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}

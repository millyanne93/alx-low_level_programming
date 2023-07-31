#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: Pointer to the string
 * @c: The character to locate
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

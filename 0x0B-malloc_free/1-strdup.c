#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0 (Success)
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *dup;

	if (str == NULL)
		return (NULL);
	ptr = str;
	while (*ptr++)
		size++;
	dup = malloc(size + 1);
	if (dup == NULL)
		return (NULL);
	ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (dup);
}

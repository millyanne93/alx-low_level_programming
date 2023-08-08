#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: input value
 * @s2: input value
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}

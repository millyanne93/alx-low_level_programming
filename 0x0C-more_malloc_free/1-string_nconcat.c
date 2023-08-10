#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: input value
 * @s2: input value
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		s[x] = s1[x];
	for (y = 0; y < n; y++, x++)
		s[x] = s2[y];
	s[x] = '\0';
	return (s);
}

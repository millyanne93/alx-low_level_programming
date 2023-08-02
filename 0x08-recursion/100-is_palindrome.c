#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to count.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * is_palindrome - Checks if the string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		if (s[start] != s[end])
			return (0);
		start++;
		end--;
	}
	return (1);
}

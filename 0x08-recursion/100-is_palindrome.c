#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string.
 * Return: Length.
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
 * checker - helper function for is_palindrome
 * @str: string
 * @len: length of string
 * @count: recursion counter
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}

/**
 * is_palindrome - Checks if the string is a palindrome.
 * @s: string to check.
 * Return: 1 if the string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}

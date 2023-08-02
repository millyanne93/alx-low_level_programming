#include <stdio.h>
/**
 * _puts_recursion - Prints a string
 * @s: the input value
 * Return: 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}

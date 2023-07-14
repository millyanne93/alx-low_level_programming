#include <stdio.h>
/**
 * main - Entry point
 *Description: Prints alphabets in lower case
 * Return: 0 (Success)
 */
int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase += 1;
}
putchar('\n');
return (0);
}

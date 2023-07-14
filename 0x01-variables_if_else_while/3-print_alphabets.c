#include <stdio.h>
/**
 * main - Entry point
 *Description: Prints alphabets in lower case
 * Return: 0 (Success)
 */
int main(void)
{
int lowercase = 'a';
int uppercase = 'A';

while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase += 1;
}
while (uppercase <= 'Z')
{
	putchar(uppercase);
	uppercase += 1;
}
putchar('\n');
return (0);
}

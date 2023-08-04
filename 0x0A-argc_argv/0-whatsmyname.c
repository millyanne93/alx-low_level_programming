#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of the arguments
 * @argv: an array of pointers to strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

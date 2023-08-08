#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - prints args
 * @ac: width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		count += strlen(av[a]);
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		strncpy(str + c, av[a], strlen(av[a]));
		c += strlen(av[a]);
		str[c] = '\n';
		c++;
	}
	str[c] = '\0';
	return (str);
}

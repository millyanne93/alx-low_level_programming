#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1])
				printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

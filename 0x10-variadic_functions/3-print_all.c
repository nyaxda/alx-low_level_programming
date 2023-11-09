#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * Description: function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int j = 0, l, k;
	char *s;
	const char  variables[] = "cifs";
	va_list args;

	va_start(args, format);

	while (format && format[j])
	{
		k = 0;
		while (variables[k])
		{
			if (format[j] == variables[k] && k > 0)
			{
				printf(", ");
				break;
			}
			k++;
		}
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				l = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				l = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				l = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				l = 1;
				break;
			default:
				l = 0;
				break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}

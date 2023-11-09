#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings, followed by a new line.
 *
 * Description - a function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *d;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		d = va_arg(args, char *);
		if (d)
		{
			printf("%s", d);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < (n -1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
}
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line, to stdout.
 *
 * Description: function that prints a string in reverse,then a new line.
 *
 * @s: pointer to a char
 *
 * Return: void
 */
void print_rev(char *s)
{
	size_t i;

	for (i = (strlen(s)+1); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

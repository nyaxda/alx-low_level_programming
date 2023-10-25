#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion -   prints a string, followed by a new line.
 *
 * Description: function that prints a string, followed by a new line.
 *
 *@s: pointer to a pointer
 *
 * Return:  pointer to the string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}

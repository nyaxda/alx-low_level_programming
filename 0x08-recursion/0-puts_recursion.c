#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_recursion -   prints a string, followed by a new line.
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
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	_putchar('\n');
}

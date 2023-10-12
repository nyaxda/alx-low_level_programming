#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * Description: function that draws a straight line in the terminal.
 *
 *@n: Variable to check
 *
 * Return: void
 */

void print_line(int n)
{
	if (n >= 0)
	{
		while (--n)
		{
			_putchar('_');
		}
	}
}

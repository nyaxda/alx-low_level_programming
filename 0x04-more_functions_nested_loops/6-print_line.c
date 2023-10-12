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
		while (n > 0)
		{
			_putchar('_');
			_putchar('\n');
			n--;
		}
}

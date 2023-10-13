#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a straight diagonal in the terminal.
 *
 * Description: function that draws a straight diagonal in the terminal.
 *
 *@n: Variable to check
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			int j = 0;

			while (j < i)
			{
				putchar(32);
				j++;
			}
			putchar(92);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}

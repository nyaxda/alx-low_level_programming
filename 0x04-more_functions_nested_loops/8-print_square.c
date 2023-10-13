#include <stdio.h>
#include "main.h"

/**
 * print_square - draws a square in the terminal.
 *
 * Description: function that draws a square in the terminal.
 *
 *@size: Variable to check
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = size;

			for (; j > 0; j--)
			{
				_putchar(35);
			}
			_putchar ('\n');
			i++;
		}
	}
}

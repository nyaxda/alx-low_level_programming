#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * Description: a function that prints a triangle, followed by a new line.
 *
 *@size: Variable to check
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			}
	}
	else
		_putchar('\n');
}

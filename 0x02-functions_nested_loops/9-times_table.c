#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry Point.
 *
 * Description: Function that prints the 9 times table, starting with 0
 *@r, @m, @v: characters to check
 *
 * Return: None (void)
 */

void times_table(void)
{
	int r;
	int m;
	int v;

	for (r = 0; r < 10; r++)
	{
		_putchar('\n');
		for (m = 0; m < 10; m++)
		{
			v = r * m;
			_putchar('0' + (v / 10));
			_putchar('0' + (v % 10));
			if  (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

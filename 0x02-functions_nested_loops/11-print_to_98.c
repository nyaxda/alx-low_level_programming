#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point.
 *
 * Description: Function prints all natural numbers from n to 98.
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n) /*Function definition*/
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar('0' + i/100);
			_putchar('0' + i/10%10);
			_putchar('0' + i%10);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			 _putchar('0' + i/100);
			_putchar('0' + i/10%10);
			_putchar('0' + i%10);
			if (i != 98)
			{	
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

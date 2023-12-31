#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point.
 *
 * Description: Function prints all natural numbers from n to 98.
 *@n: Parameter to be checked
 * Return: Always 0 (Success)
 */

void print_to_98(int n) /*Function definition*/
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
				_putchar(',');
				_putchar(' ');
			}
		}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i < 10)
			{
			 _putchar('0' + i);
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

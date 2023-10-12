#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers
 *
 * Description: function prints from 0-9, followed by new line.
 *Except for 2 and 4.
 *
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

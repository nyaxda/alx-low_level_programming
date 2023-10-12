#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Description: function that prints numbers, from 0-9, followed by new line.
 *
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

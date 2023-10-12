#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry Point.
 *
 * Description: Function that prints the sign of a number.
 *
 * @n: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

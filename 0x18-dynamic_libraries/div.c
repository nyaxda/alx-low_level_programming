#include "python.h"

/**
 * div - Function that divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The division of the two integers, or -1 if the second integer is 0.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (-1);
	}
	return (a / b);
}

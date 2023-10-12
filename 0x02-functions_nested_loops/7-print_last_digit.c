#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry Point.
 *
 * Description: Function that prints last digit of a number.
 *
 * @r: the character to check
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	int digit

	if (r < 0)
		digit = -r % 10;
	else
		digit = r %10;

	_putchar('0' + digit);

	return(0);
}

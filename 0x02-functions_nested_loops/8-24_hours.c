#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry Point.
 *
 * Description: Function that prints every minute from 00:00 to 23:59
 *@h, @m: characters to check
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h;
	int m;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
	return (0);
}

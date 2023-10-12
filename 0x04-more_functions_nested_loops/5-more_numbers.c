#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Description: function prints from 0-14,ten times, followed by new line.
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int p;

	for (p = 0; p < 10; p++)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		fflush(stdout);

		write(1, "10", 2);
		write(1, "11", 2);
		write(1, "12", 2);
		write(1, "13", 2);
		write(1, "14", 2);

		_putchar('\n');
	}
}

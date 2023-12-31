#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry Point.
 *
 * Description: Function print_alphabet_x10 printing lowercase letters x10.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void) /*Function definition*/
{
	int i = 0;

	while (i < 10)
	{
		char beg = 'a';

		while (beg <= 'z')
		{
			_putchar(beg);
			beg++;
		}

		_putchar(10);
		i++;
	}
}

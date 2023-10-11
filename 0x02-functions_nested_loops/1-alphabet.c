#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point.
 *
 * Description: Function print_alphabet printing lowercase letters/
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /*Function definition*/
{
	char beg = 'a';

	while (beg <= 'z')
	{
		_putchar(beg);
		beg++;
	}

	_putchar(10);
}

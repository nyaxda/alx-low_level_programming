#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point.
 *
 * Description: Prints alphabet in lowercase, then newline
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char beg = 'a';
	while (beg <= 'z')
	{
		_putchar(beg);
		beg++;
	}

	_putchar(10);
}

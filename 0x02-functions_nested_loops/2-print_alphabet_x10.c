#include <stdio.h>
#include "main.h"

/**
 * print_alphabetx10 - Entry Point.
 *
 * Description: Function print_alphabetx10 printing lowercase letters x10.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /*Function definition*/
{
	int i = 0;
	while (i<10)
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

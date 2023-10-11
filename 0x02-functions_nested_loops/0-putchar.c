#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point.
 *
 * Description: prints '_putchar' with a newline.
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	_putchar(95);
	_putchar(112);
	_putchar(117);
	_putchar(116);
	_putchar(99);
	_putchar(104);
	_putchar(97);
	_putchar(114);
	_putchar(10);

	return (0);
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}

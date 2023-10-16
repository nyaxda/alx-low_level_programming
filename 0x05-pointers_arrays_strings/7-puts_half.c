#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * Description: function that prints half of a string, followed by a new line.
 *
 *@str: pointer to a char
 *
 * Return: void
 */
void puts_half(char *str)
{
	size_t i;

	if (strlen(str) % 2  == 0)
	{
		for (i = (strlen(str) / 2); i < ((strlen(str))); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((strlen(str) + 1) / 2); i < (strlen(str)); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

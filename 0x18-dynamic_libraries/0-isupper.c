#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * Description: Function that checks for uppercase character.
 *
 *@c: The character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (0);
	return (0);
}

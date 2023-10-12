#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry Point.
 *
 * Description: Function that checks for alphabetic character.
 *
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	

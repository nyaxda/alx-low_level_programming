#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point.
 *
 * Description: Function _islower checks for lowercase ASCII member  c.
 *@c: the character to check
 * Return: 1 if c is lowercase letter, 0 otherwise.
 */

/*'c' is the ASCII character*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

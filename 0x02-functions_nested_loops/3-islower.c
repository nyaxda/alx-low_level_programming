#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point.
 *
 * Description: Function _islower checks for lowercase ASCII member  'c'.
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)/*c is the ASCII character*/
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

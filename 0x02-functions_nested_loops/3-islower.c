#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point.
 *
 * Description: Function _islower checks for lowercase character.
 *
 * Return: Always 0 (Success)
 */

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

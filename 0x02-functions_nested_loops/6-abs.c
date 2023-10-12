#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry Point.
 *
 * Description: Function that computes the absolute value of an integer.
 *
 *
 * Return:Always 0 (Success)
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}

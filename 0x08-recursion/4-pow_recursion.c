#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 *
 * Description: function that returns the value of x raised to the power of y.
 *
 *@x: int variable
 *@y: int variable
 *
 * Return: int variable
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if ( y == 0)
	{
		return (1);
	}
	x = x * _pow_recursion(x, (y -1));

	return (x);
}

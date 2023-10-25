#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial -   returns the factorial of a given number.
 *
 * Description: function that  returns the factorial of a given number.
 *
 *@n: int variable
 *
 * Return: factorial of n (int)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}

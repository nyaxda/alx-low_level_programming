#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * checker -  to check if a number is a perfect square.
 * Description: function that returns the natural square root of a number.
 *
 *@i: int to check
 *@n: int variable to check if is a perfect square
 *
 * Return: int variable
 *
 */
int checker (int i, int n)
{
	int j;
	if (i * i != n)
	{
		if (i > n)
		return (-1);
	j = checker(i + 1, n);
	return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * Description: function that returns the natural square root of a number.
 *
 *@n: int variable
 *
 * Return: if n is a perfect square, return 0.
 * if n is not a perfect square, return -1.
 *
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (checker(i, n) == n && n != 1)
	{
		return (-1);
	}
	return (checker(i, n));
}

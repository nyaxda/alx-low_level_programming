#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * checker -  returns 1 if the input integer is a prime number, otherwise return 0
 * Description: function that checks if a number is prime.
 *
 *@n: int variable to be checked if is prime
 *@i: int variable to check if is prime
 *
 * Return: if n is a prime number, return 1. if n is not prime, return 0.
 *
 */

int checker (int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return checker(n, i - 1);
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 * Description: function that checks if a number is prime.
 *
 *@n: int variable
 *
 * Return: if n is a prime number, return 1.
 * if n is not prime, return 0.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return checker(n, n - 1);
}

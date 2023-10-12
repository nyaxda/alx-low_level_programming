#include <stdio.h>
#include "main.h"

/**
 * mul - multiplies two integers
 *
 * Description: a function that multiplies two integers
 *
 *@a: Integer variable 1
 *@b: Integer variable 2
 *@c: Integer variable 3 takes product of a and b
 *@d: Divisor
 *@e: Digit to be captured for output to f
 *@f: Digits to be used in _putchar
 *
 * Return: Always 0 (Success)
 */
 
int mul(int a, int b)
{
	int c;
	int d = 1000000;
	c = (a * b);
	int e;
	int f;
	
	if (c < 0) /* to handle negative numbers*/
	{
		_putchar ('-');
		c *= -1;
		for(; d >=1; d/=10)
		{
			e = (c / d);
			if (e == 0)
			{
				/* Does not output anything*/
			}
			else
				f = (e % 10);
			_putchar('0' + f);
		}
	}
	if (c == 0) /*to handle zero numbers*/
	{
		_putchar('0');
	}
	
	if (c > 0) /* to handle positive numbers*/
	{
		for(; d >=1; d/=10)
		{
			e = (c / d);
			if (e == 0)
			{
				/* Does not output anything*/
			}
			else
				f = (e % 10);
			_putchar('0' + f);
		}
	}
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 *positive_or_negative - print nature of the number.
 *
 *Description: print nature of the number stored in the variable n
 *
 *@i: Variable to check

 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

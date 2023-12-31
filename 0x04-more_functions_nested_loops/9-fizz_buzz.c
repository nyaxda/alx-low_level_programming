#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: prints the numbers from 1 to 100, and a new line.
 *For every multiple of 3, print "Buzz", 5, "Fizz", 15, "FizzBuzz".
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i  >= 15)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0 && i >= 3)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i >= 5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}

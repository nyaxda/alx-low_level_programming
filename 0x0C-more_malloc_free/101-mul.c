#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_digit - Check if a string is composed of digits.
 * @s: The string to check.
 * Return: 1 if composed of digits, 0 otherwise.
 */
int check_digit(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * number_processor - Process and print an integer using _putchar.
 * @num: The integer to be processed and printed.
 */
void number_processor(int num)
{
	int count = 1;
	int temp = num;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10)
	{
		while (temp / 10)
		{
			temp /= 10;
			count *= 10;
		}
		while (count)
		{
			_putchar(num / count + '0');
			num %= count;
			count /= 10;
		}
	}
	else
	{
		_putchar(num + '0');
	}
}

/**
 * main - multiples two positive numbers.
 *
 * Description: program that multiplies two positive numbers.
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98.
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line,
 * and exit with a status of 98
 *
 *@argc: no. of arguments passed to the program
 *@argv:argument vector of pointers to strings
 *
 * Return: If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int num1, num2, result;

	if (argc != 3)
	{
		for (i = 0; "Error\n"[i] != '\0'; i++)
		{
			_putchar("Error\n"[i]);
		}
		exit(98);
	}
	else
	{
		while (i < argc)
		{
			if (check_digit(argv[i]) == 0)
			{
				for (i = 0; "Error\n"[i] != '\0'; i++)
				{
					_putchar("Error\n"[i]);
				}
				exit(98);
			}
			i++;
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	number_processor(result);
	_putchar('\n');
	return (0);
}

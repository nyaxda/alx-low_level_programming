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
 * get_size - Calculate the number of digits in an integer.
 * @num: The integer to calculate the size for.
 *
 * Return: The number of digits in the integer.
 */
int get_size(int num)
{
	int size = 0;

	if (num == 0)
	{
		return (1);
	}

	while (num != 0)
	{
		num /= 10;
		size++;
	}

	return (size);
}

/**
 * multiply - Multiply two integers
 * @num1: The first integer to multiply.
 * @num2: The second integer to multiply.
 * @result: the array to store the result.
 * @size1: The size of the first integer.
 * @size2: The size of the second integer.
 */
void multiply(int *num1, int *num2, int *result, int size1, int size2)
{
	int i, j, carry, product;

	for (i = size1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = size2 - 1; j >= 0; j--)
		{
			product = num1[i] * num2[j] + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i + j + 1] += carry;
	}
}

/**
 * error - Print the error message and exit with code 98.
 */
void error(void)
{
	int i;
	for (i = 0; "Error\n"[i] != '\0'; i++)
	{
		_putchar("Error\n"[i]);
	}
	exit(98);
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
	int num1, num2, *result, size1, size2;

	if (argc != 3)
	{
		for (i = 0; "Error\n"[i] != '\0'; i++)
		{
			_putchar("Error\n"[i]);
		}
		exit(98);
	}
	if (check_digit(argv[1]) == 0 || check_digit(argv[2]) == 0)
	{
		error();
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	size1 = get_size(num1);
	size2 = get_size(num2);
	result = malloc(sizeof(int) * (size1 + size2));
	if (result == NULL)
	{
		error();
	}

	multiply(&num1, &num2, result, size1, size2);
	i = 0;

	while (result[i] == 0)
	{
		i++;
	}

	for (; i < size1 + size2; i++)
	{
		_putchar(result[i] + '0');
	}
	_putchar('\n');
	free(result);
	return (0);
}

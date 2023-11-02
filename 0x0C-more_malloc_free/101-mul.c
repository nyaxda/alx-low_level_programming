#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int findStringLength(char *str);
char *initializeCharArray(int size);
char *skipLeadingZeros(char *str);
void calculateProduct(char *result, char *multiplier, int digit, int leadingZeros);
void addResults(char *finalResult, char *nextResult, int nextResultLength);

/**
 * findStringLength - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int findStringLength(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * initializeCharArray - Creates an array of chars and initializes it with
 *                      the character 'X'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *initializeCharArray(int size)
{
	char *arr;
	int index;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		arr[index] = 'X';

	arr[index] = '\0';

	return (arr);
}

/**
 * skipLeadingZeros - Iterates through a string of numbers containing
 *                   leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *skipLeadingZeros(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * convertCharToInt - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function exits with a status of 98.
 * Return: The converted int.
 */
int convertCharToInt(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * calculateProduct - Multiplies a string of numbers by a single digit.
 * @result: The buffer to store the result.
 * @multiplier: The string of numbers.
 * @digit: The single digit.
 * @leadingZeros: The necessary number of leading zeros.
 *
 * Description: If multiplier contains a non-digit, the function exits with a status value of 98.
 */
void calculateProduct(char *result, char *multiplier, int digit, int leadingZeros)
{
	int multiplierLength, num, tens = 0;

	multiplierLength = findStringLength(multiplier) - 1;
	multiplier += multiplierLength;

	while (*result)
	{
		*result = 'X';
		result++;
	}

	result--;

	while (leadingZeros--)
	{
		*result = '0';
		result--;
	}

	for (; multiplierLength >= 0; multiplierLength--, multiplier--, result--)
	{
		if (*multiplier < '0' || *multiplier > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*multiplier - '0') * digit;
		num += tens;
		*result = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*result = (tens % 10) + '0';
}

/**
 * addResults - Adds the numbers stored in two strings.
 * @finalResult: The buffer storing the running final product.
 * @nextResult: The next product to be added.
 * @nextResultLength: The length of nextResult.
 */
void addResults(char *finalResult, char *nextResult, int nextResultLength)
{
	int num, tens = 0;

	while (*(finalResult + 1))
		finalResult++;

	while (*(nextResult + 1))
		nextResult++;

	for (; *finalResult != 'X'; finalResult--)
	{
		num = (*finalResult - '0') + (*nextResult - '0');
		num += tens;
		*finalResult = (num % 10) + '0';
		tens = num / 10;

		nextResult--;
		nextResultLength--;
	}

	for (; nextResultLength >= 0 && *nextResult != 'X'; nextResultLength--)
	{
		num = (*nextResult - '0');
		num += tens;
		*finalResult = (num % 10) + '0';
		tens = num / 10;

		finalResult--;
		nextResult--;
	}

	if (tens)
		*finalResult = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argumentCount: The number of arguments passed to the program.
 * @arguments: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argumentCount, char *arguments[])
{
	char *finalResult, *nextResult;
	int size, digit, leadingZeros = 0;

	if (argumentCount != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(arguments[1]) == '0')
		arguments[1] = skipLeadingZeros(arguments[1]);
	if (*(arguments[2]) == '0')
		arguments[2] = skipLeadingZeros(arguments[2]);
	if (*(arguments[1]) == '\0' || *(arguments[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = findStringLength(arguments[1]) + findStringLength(arguments[2]);
	finalResult = initializeCharArray(size + 1);
	nextResult = initializeCharArray(size + 1);

	for (int index = findStringLength(arguments[2]) - 1; index >= 0; index--)
	{
		digit = convertCharToInt(*(arguments[2] + index));
		calculateProduct(nextResult, arguments[1], digit, leadingZeros);
		addResults(finalResult, nextResult, size - 1);
		leadingZeros++;
	}

	for (int index = 0; finalResult[index]; index++)
	{
		if (finalResult[index] != 'X')
			putchar(finalResult[index]);
	}
	putchar('\n');

	free(nextResult);
	free(finalResult);

	return (0);
}

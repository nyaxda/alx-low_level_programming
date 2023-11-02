#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int findStringLength(char *str);
char *initializeCharArray(int size);
char *skipLeadingZeros(char *str);
void calculateProduct(char *result, char *multiplier, int digit, int leadingZeros);
void addResults(char *finalResult, char *nextResult, int nextResultLength);

int findStringLength(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

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

char *skipLeadingZeros(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

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

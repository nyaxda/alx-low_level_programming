#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * where b is pointing to a string of 0 and 1 chars
 *
 * b: string of characters holding the binary numbers.
 * Return: converted number or 0 if there is one or more chars in the string
 * b that is not 0 or 1, or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	char *error;
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && b != '1')
			return (0);
		b++;
	}
	result = (unsigned int)strtoul(b, &error, 2);
	if (error == b)
	{
		return (0);
	}
	return (result);
}

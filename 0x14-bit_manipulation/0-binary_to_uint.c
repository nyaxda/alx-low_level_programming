#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 **_strcpy - copies the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest.
 *Description: a function that copies the string pointed to by src to dest.
 *
 *@dest: char pointer variable
 *@src: char pointer variable
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[strlen(src)] = '\0';
	return (dest);
}

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
	char *buffer, *endpointer;
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	buffer = malloc(strlen(b) + 1);
	if (buffer == NULL)
	{
		return (0);
	}

	_strcpy(buffer, b);

	while (*buffer != '\0')
	{
		if (*buffer != '0' && *buffer != '1')
			return (0);
		buffer++;
	}
	result = (unsigned int)strtoul(b, &endpointer, 2);
	if (endpointer == buffer)
	{
		return (0);
	}
	return (result);
}

#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * Description: function that fills memory with a constant byte.
 *
 *@s: pointer to a char
 *@b: char variable
 *@n: int variable
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *origin = s;
	size_t i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (origin);
}

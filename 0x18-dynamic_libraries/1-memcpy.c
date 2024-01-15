#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * Description: function that copies memory area.
 *
 *@dest: pointer to a char
 *@src: pointer to a char
 *@n: int variable
 *
 * Return: pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *origin = dest;
	size_t i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (origin);
}

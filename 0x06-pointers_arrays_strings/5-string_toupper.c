#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * Description: function that changes all lowercase letters of a
 * string to uppercase.
 *
 *@a: pointer to an integer
 *@n: integer variable
 *
 *
 * Return: void.
 */
char *string_toupper(char *ptr)
{
	char *origin = ptr;
	size_t i;
	int j;

	*origin = *ptr;

	while (*origin != '\0')
	{
		i = (int)*origin;
		if (i > 96 && i < 123)
		{
			*origin = ((char)(i - 32));
		}
		else if ( i > 64 && i < 91)
		{
			*origin = ((char)i);
		}
		origin++;
	}
	return (ptr);
}
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes first words of a string.
 * Description: function that capitalizes first words of a string.
 *
 * Return: capitalized first words of a string (*char).
 */

char *cap_string(char *ptr)
{
	char *origin = ptr;
	size_t i;
	int j;

	*origin = *ptr;

	while (*origin != '\0')
	{
		i = (int)*origin;
		if (*origin == ' ' ||
		*origin == ',' ||
		*origin == ';' ||
		*origin == '"' ||
		*origin == '(' ||
		*origin == ')' ||
		*origin == '{' ||
		*origin == '}'
		)
		{
			*origin = ' ';
		}
		if ( *(origin - 1) == ' ' ||
		*(origin - 1) == '\n' ||
		*(origin - 1) == '\t' ||
		*(origin - 1) == '.' ||
		*origin == '!' ||
		*origin == '?')
		{
			if (i > 96 && i < 123)
			{
				*origin = ((char)(i - 32));
			}
			else
			{
				*origin = ((char)i);
			}
		}
		origin++;
	}
	return (ptr);
}
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes first words of a string.
 * Description: function that capitalizes first words of a string.
 *
 * @str: pointer to a char
 *
 * Return: capitalized first words of a string (*char).
 */

char *cap_string(char *str)
{
	char *origin = str;
	size_t i;

	*origin = *str;

	while (*origin != '\0')
	{
		i = (int)*origin;
		if (*(origin - 1) == ' ' ||
		*(origin - 1) == '\n' ||
		*(origin - 1) == '\t' ||
		*(origin - 1) == '.' ||
		*(origin - 1) == '!' ||
		*(origin - 1) == '?' ||
		*(origin - 1) == ',' ||
		*(origin - 1) == ' ' ||
		*(origin - 1) == ';' ||
		*(origin - 1) == '"' ||
		*(origin - 1) == '(' ||
		*(origin - 1) == ')' ||
		*(origin - 1) == '{' ||
		*(origin - 1) == '}')
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
	return (str);
}

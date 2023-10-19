#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * Description: function that encodes a string using rot13.
 *
 *@str: pointer to a char.
 *
 * Return: encoded string (*char).
 */
char *rot13(char *str)
{
	size_t i;
	char *init = str;
	
	i = (int)(*str);

	while (*str != '\0')
	{
		i = (int)(*str);
		if (isalpha(*str))
		{
			if ((i >= 65 && i <= 77) || (i >= 97 && i <= 109))
			{
				*str = (char)(i + 13);
			}
			else
			{
				*str = (char)(i - 13);
			}
		}
		str++;
	}
	return (init);
}

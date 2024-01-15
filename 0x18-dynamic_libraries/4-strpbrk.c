#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * Description: function that searches a string for any of a set of bytes.
 *
 *@s: pointer to a char
 *@accept: pointer to a char
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i = 0;
	size_t a;
	int t;

	size_t len = strlen(s);
	size_t lenn = strlen(accept);

	if (lenn == 0)
	{
		return (NULL);
	}

	while (i <= len && s[i] != '\0')
	{
		a = 0;
		t = 0;
		while (a <= lenn)
		{
			if (s[i] == accept[a])
			{
				t = 1;
				break;
			}
			a++;
		}
		if (t)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);

}

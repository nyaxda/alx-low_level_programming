#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strstr -  finds the first occurrence of
 * the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * Description: function that searches a string for any of a set of bytes.
 *
 *@haystack: pointer to a char
 *@needle: pointer to a char
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i = 0;
	size_t a;

	size_t len = strlen(haystack);
	size_t lenn = strlen(needle);

	if (lenn == 0)
	{
		return (haystack);
	}

	while (i < len - lenn && haystack[i] != '\0')
	{
		a = 0;

		while (a < lenn)
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}
			a++;
		}
		if (a == lenn)
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

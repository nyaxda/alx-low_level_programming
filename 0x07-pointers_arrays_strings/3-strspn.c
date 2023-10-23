#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * Description: function gets the length of a prefix substring.
 *
 *@s: pointer to a char
 *@accept: pointer to a char
 *
 * Return: the number of bytes in the initial segment of s.
 */
{
	size_t i = 0;
	size_t j = 0;
	size_t len = strlen(s);
	size_t len2 = strlen(accept);
	size_t count = 0;

	while (i <= len)
	{
		while (j <= len2)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}

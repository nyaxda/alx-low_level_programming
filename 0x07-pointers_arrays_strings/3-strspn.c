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
unsigned int _strspn(char *s, char *accept)
{
	size_t i = 0;
	size_t a;
	size_t len = strlen(s);
	size_t lenn = strlen(accept);
	size_t count = 0;

	while (i <= len)
	{
		a = 0;
		while (a <= lenn)
		{
			if (s[i] == accept[a])
			{
				count++;
				break;
			}
			a++;
		}
		i++;
	}
	return (count);
}

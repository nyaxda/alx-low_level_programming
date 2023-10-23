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
	int t;
	size_t len = strlen(s);
	size_t lenn = strlen(accept);
	size_t count = 0;

	while (i <= len)
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
		if (!t)
		{
			break;
		}
		
		count++;
		i++;
	}
	return (count);
}

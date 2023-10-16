#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse.
 *
 * Description: function that prints a string in reverse.
 *
 *@i: long integer variable used in looping
 *@t: long integer variable used in looping
 *@len: long integer variable to determing length of string.
 *@s: pointer to a char
 *
 * Return: void
 */

void rev_string(char *s)
{
	size_t i;
	size_t t;
	size_t len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Description: function that encodes a string into 1337.
 *
 *@ptr: pointer to a char.
 *
 * Return: capitalized first words of a string (*char).
 */

char *leet(char *ptr)
{
	int i;
	char mod[128];
	char *init = ptr;

	for (i = 0; i < 128; i++)
	{
		mod[i] = (char)i;
	}

	mod['a'] = '4';
	mod['A'] = '4';
	mod['e'] = '3';
	mod['E'] = '3';
	mod['o'] = '0';
	mod['O'] = '0';
	mod['t'] = '7';
	mod['T'] = '7';
	mod['l'] = '1';
	mod['L'] = '1';

	ptr = init;

	while (*ptr != '\0')
	{
		i = (int)*ptr;
		if (mod[i] != '\0')
		{
			*ptr = mod[i];
		}
		ptr++;
	}
	return (init);
}

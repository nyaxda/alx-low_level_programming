#include <string.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse.
 *
 * Description: function that prints a string in reverse.
 *
 * @s: pointer to a char
 *
 * Return: void
 */
void rev_string(char *s)
{
	size_t i;

	i = (strlen(s));

	while (i--)
	{
		_putchar(s[i]);
	}
}

#include <string.h>
/**
 * swap_int - prints a string, followed by a new line, to stdout.
 *
 * Description: function that prints a string,then a new line, to stdout.
 *
 * @str: pointer to a char
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i= 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
}

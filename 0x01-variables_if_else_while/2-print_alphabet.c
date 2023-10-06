#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description - prints alphabet in lowercase followed by new line.
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz"

	for (i=0;i<strlen(alphabet);i++)
	{
		putchar("%c\n",alphabet[i]);
	}

	return (0);
}

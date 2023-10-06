#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Description - prints alphabet in lowercase in reverse followed by new line.
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int a = strlen(alphabet);

	for (i = a; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}

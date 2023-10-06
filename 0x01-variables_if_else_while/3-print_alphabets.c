#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Description - prints alphabet in lowercase & UPPERCASE
 * followed by new line.
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int a = strlen(alphabet);

	for (i = 0; i < a; i++)
	{
		putchar(alphabet[i]);
	}
	for ( i = 0; i < a; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}

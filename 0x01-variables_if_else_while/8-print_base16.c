#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Description - prints all the numbers of base 16 in lowercase, then newline.
 *  Return:Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(97 + i);
	}
	putchar('\n');

	return (0);
}

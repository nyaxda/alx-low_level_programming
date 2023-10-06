#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Description - prints all possible combinations of single-digit numbers.
 *  Return:Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(48 + i);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	write(1,"\n",1);

	return (0);
}

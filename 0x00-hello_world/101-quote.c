#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Description: Prints content followed by new line to stderr
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*printing characters using char pointer msg*/
	const char *goo = "and that piece of art is useful\" - Dora Korpar, "
		"2015-10-19\n";

	write(2, goo, strlen(goo));
	return (1);
}

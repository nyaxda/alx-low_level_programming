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
	const char *part1 = "and that piece of art is useful\"";
	const char *part2 = " - Dora Korpar, 2015-10-19\n";

	/*file descriptor*/
	write(2, part1, strlen(part1));
	write(2, part2, strlen(part2));
	return (1);
}

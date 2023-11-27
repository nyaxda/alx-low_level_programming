#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of the file where the text is read from
 * @letters: the size in bytes of characters to be read.
 * Return: actual numbers of letters it could read and print.
 * if the file cannot be opened of read, return 0,
 * if filename is NULL, return 0.
 * if write fails or does not write the expected amounts of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes, size;
	char *c;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	c = (char *)malloc(letters * sizeof(char));
	if (c == NULL)
	{
		close(fd);
		return (0);
	}
	size = read(fd, c, letters);
	if (size < 0)
	{
		free(c);
		close(fd);
		return (0);
	}
	c[size] = '\0';

	bytes = write(STDOUT_FILENO, c, size);
	if (bytes != size)
	{
		free(c);
		close(fd);
		return (0);
	}
	free(c);
	close(fd);

	return (size);
}

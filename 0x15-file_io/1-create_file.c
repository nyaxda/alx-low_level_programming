#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file.
 * @text_content: - NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file cannot be created, file cannot be
 * written, write "fails", etc...)
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
			fd = open(filename, O_WRONLY | O_TRUNC, 0600);
	}
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes = write(fd, text_content, strlen(text_content));
		if (bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

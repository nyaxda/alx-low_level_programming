#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
/**
 * exit_with_error_97 - Prints error message to stderr exits with code 97.
 * @message: The error message to be printed.
 * Return: void.
 */
void exit_with_error_97(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(97);
}
/**
 * exit_with_error_98 - Prints error message to stderr exits with code 98.
 * @message: The error message to be printed.
 * Return: void.
 */
void exit_with_error_98(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(98);
}
/**
 * exit_with_error_99 - Prints error message to stderr exits with code 99.
 * @message: The error message to be printed.
 * Return: void.
 */
void exit_with_error_99(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(99);
}
/**
 * exit_with_error_100 - Prints error message to stderr exits with code 100.
 * @message: The error message to be printed.
 * Return: void.
 */
void exit_with_error_100(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(100);
}
/**
 * main - Copies the content of one file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, or an exit code on failure.
 *
 * This program takes two command-line arguments representing source and
 * destination files. It copies the content of the source file to the
 * destination file. If any error occurs during the process, it prints an
 * appropriate error message to stderr and exits with the corresponding
 * exit code.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char buffer[1024];
	ssize_t sourcebytes, destbytes;

	if (argc != 3)
		exit_with_error_97("Usage: cp file_from file_to");
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
		exit_with_error_98("Error: Can't read from file %s\n", argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 < 0)
		exit_with_error_99("Error: Can't write to %s\n", argv[2]);
	sourcebytes = read(fd1, buffer, sizeof(buffer));
	while(sourcebytes)
	{
		destbytes = write(fd2, buffer, sourcebytes);
		if (destbytes < 0)
			exit_with_error_99("Error: Can't write to %s\n", argv[2]);
	}
	if (sourcebytes < 0)
		exit_with_error_98("Error: Can't read from file %s\n", argv[1]);
	if (destbytes < 0)
		 exit_with_error_99("Error: Can't write to %s\n", argv[2]);
	if (close(fd1) < 0)
		exit_with_error_100("Error: Can't close fd %d\n", fd1);
	if (close(fd2) < 0)
		exit_with_error_100("Error: Can't close fd %d\n", fd2);
	return (0);
}

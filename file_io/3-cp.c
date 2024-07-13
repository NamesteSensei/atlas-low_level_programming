#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * error_exit - Prints an error message and exits with a given code.
 * @code: The exit code.
 * @message: The error message.
 * @file: The file related to the error.
 */
void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}

/**
 * copy_file - Copies the content of a file to another file.
 * @file_from: The source file.
 * @file_to: The destination file.
 *
 * Return: 0 on success, or a positive error code on failure.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to", file_to);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file", file_from);
	}

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd", "fd_from");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", "fd_to");

	return (0);
}

/**
 * main - Entry point for the copy_file program.
 * @argc: The number of arguments.
 * @argv: The argument values.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", "");

	copy_file(argv[1], argv[2]);

	return (0);
}


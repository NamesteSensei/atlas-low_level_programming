#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * open_file - Opens a file.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor, or -1 if the file can't be opened.
 */
int open_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	return (fd);
}

/**
 * allocate_buffer - Allocates a buffer to hold file content.
 * @letters: The number of letters to read and print.
 *
 * Return: A pointer to the allocated buffer, or NULL if allocation fails.
 */
char *allocate_buffer(size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	return (buffer);
}

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes the function can read and
 *         print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open_file(filename);
	if (fd == -1)
		return (0);

	buffer = allocate_buffer(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytesWritten);
}


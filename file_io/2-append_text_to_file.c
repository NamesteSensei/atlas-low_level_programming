#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the NULL-terminated string to add at the end
 *                of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist, return -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytesWritten, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		bytesWritten = write(fd, text_content, length);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}


#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - A function that creates a file
 * @filename: a pointer that handle the name of the file to create
 * @text_content: A null terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int fd, bytes_write;

	if (filename == NULL)
		return (-1);
	buffer = text_content;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content == NULL)
			bytes_write = write(fd, buffer, 0);
		bytes_write = write(fd, buffer, strlen(text_content));
		if (bytes_write == -1)
		{
			return (-1);
		}
		return (1);
	}
	close(fd);
}

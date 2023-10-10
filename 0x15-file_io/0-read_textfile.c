#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

/**
 * read_textfile - A function that reads a text file and prints
 *                 it to the POSIX std output.
 * @filename: A pointer that handle the file name
 * @letters: The number of letters the fct should read
 *
 * Return: the actul number of letters  the fct should read and
 *         print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_write, bytes_read;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, letters);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
		return (0);
	free(buffer);
	close(fd);
	return (bytes_write);
}

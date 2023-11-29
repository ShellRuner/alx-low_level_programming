#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 *                 prints it to the POSIX stdout
 * @filename: the file name
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters it could read and print
 *         or 0(fail)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count;
	int fd, br;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY | O_CREAT, 770);
	if (buf == NULL || filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	br = read(fd, buf, letters);
	if (br == -1)
		return (0);
	count = write(STDOUT_FILENO, buf, br);
	close(fd);
	free(buf);
	if (br != count || count == -1)
	{
		return (0);
	}
	else
	{
		return (count);
	}

}

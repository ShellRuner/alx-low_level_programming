#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On erreor, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

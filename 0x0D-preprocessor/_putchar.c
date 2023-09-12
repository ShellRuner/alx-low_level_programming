#include "main.h"

/**
 * _putchar - putchar custom
 *
 * @c: parameter
 *
 * Return: and int
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

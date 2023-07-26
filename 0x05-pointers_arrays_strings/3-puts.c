#include "main.h"

/**
 * _puts - A function that print strings
 *
 * @str: parameter of the function and char pointer
 *
 * Return: Nothing (void)
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

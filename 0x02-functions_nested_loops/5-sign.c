#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: The argument of the function
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		res = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		res = 0;
		_putchar(48);
	}
	else
	{
		res = -1;
		_putchar(45);
	}
	return (res);
}

#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: The argument of the function
 *
 * Return: Always res an int (Success)
 */
int print_last_digit(int n)
{
	int res;

	if (n <= 0)
	{
		res = _abs(n) % 10;
		_putchar('0' + res);
	}
	else
	{
		res = n % 10;
		_putchar('0' + res);
	}

	return (res);
}

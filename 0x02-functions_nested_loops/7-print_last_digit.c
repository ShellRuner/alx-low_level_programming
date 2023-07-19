#include "main.h"


/**
 * print_last_digit - Entry point
 *
 *@n: The argument of the function print_last_digit
 *
 * Return: Always res an int (Success)
 */
int print_last_digit(int n)
{
	int res;

	if (n <= 0)
	{
		res = (-n) % 10;
		_putchar('0' + res);
	}
	else
	{
		res = n % 10;
		_putchar('0' + res);
	}

	return (res);
}

/**
 *_abs - Entry point
 *
 * @v: Argument of the function
 *
 * Return: Always rs (Success)
 */

int _abs(int v)
{
	int rs;

	if (v < 0)
	{
		rs = -v;
	}
	else if (v == 0)
	{
		rs = v;
	}
	else
	{
		rs = v;
	}
	return (rs);
}

#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its
 *                parameters.
 * @n: the first parameter
 *
 * Return: an int (success) or 0(fail)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, num;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			sum += num;
		}
		va_end(args);
		return (sum);
	}
}

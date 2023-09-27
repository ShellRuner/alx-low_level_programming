#include "variadic_functions.h"

/**
 * sum_them_all - A function that return the sum of all its
 *                parameter.
 * @n: fixe argument
 *
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	int sum;

	sum = 0;
	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

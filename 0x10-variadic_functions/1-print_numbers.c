#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed
 *                 by a new line
 * @separator: fixed argument
 * @n: parameter
 *
 * Return: a value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_start(valist, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

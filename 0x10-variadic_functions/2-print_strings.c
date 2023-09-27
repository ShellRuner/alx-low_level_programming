#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by
 *                 a new line.
 * @separator: a parameter
 * @n: a parameter
 *
 * Return: a value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		char *s;

		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (count + 1 != n))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

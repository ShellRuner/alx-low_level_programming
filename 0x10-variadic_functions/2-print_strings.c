#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * @separator: first argument and string to be printed
 *            between the strings
 * @n: second argument and the number of strings passed to the
 *      function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

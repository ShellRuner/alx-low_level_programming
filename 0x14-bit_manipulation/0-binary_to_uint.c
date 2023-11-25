#include "main.h"
#include <math.h>

/**
 * binary_to_uint - A function that converts a binary number
 *                  to an unsigned int
 * @b: a pointer to the binary number
 *
 * Return: the converted number, or 0 (fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uinumb = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			uinumb = uinumb * 2 + (*b - '0');
		}
		else
		{
			return (0);
		}

		b++;
	}

	return (uinumb);
}

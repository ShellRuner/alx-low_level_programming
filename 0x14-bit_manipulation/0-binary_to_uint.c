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
	unsigned int binnum, index = 0, digit;
	unsigned int uinumb = 0, i = 0, r = 0, v;
	unsigned int resultat = 1;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		index++;
	}

	binnum = atoi(b);

	for (v = 0; v < index; v++)
	{
		if (b[v] >= '0' && b[v] <= '1')
		{
			binnum = atoi(b);
		}
		else
		{
			return (0);
		}
	}

	if (binnum == 0)
	{
		return (0);
	}

	while (binnum && i < index)
	{
		digit = binnum % 10;
		for (r = 0; r < i; r++)
		{
			resultat = resultat * 2;
		}
		uinumb += digit * resultat;
		resultat = 1;
		binnum = binnum / 10;
		i++;
	}
	return (uinumb);
}

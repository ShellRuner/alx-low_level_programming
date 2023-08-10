#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 *
 * @s : Adress of the charactere
 *
 * @b : the character we will use to fill
 *
 * @n : the max bytes of the memory area
 *
 * Return: a pointer of char success (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

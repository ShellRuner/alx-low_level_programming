#include "main.h"

/**
 *_strncat - Function that concatenates two strings
 *
 *@dest: Adress of the destination string
 *
 * @src: Adress of the source string
 *
 * @n: Number of bytes of the source string
 *
 * Return: A pointer to the destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (j != n - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];

	return (dest);
}

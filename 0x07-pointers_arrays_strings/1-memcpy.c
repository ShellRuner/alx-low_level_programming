#include "main.h"

/**
 * _memcpy - A function that copies n bytes from a src memory area to
 *           dest memory area
 *
 * @dest: A pointer to the memory location where the copied data will be stored
 *
 * @src: A pointer to the memory location from where the data is to be copied
 *
 * @n: The number of bytes to be copied
 *
 * Return: return a pointer to the memory location where data is copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

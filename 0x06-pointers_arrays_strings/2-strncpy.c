#include "main.h"

/**
 * _strncpy - Function that copies string
 *
 * @dest: Adress of the destination string
 *
 * @src: Adress of the source string
 *
 * @n: length of the string to copy
 *
 * Return: A pointer (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * _calloc - A function that allocates memory for an array using
 *           malloc.
 * @nmemb:param
 * @size:param
 *
 * Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	call = malloc(b);
	if (call == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		call[a] = 0;
	}
	return (call);
}

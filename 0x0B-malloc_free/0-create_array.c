#include "main.h"

/**
 * create_array - Function that create an array of char
 * @size: The size of the array
 * @c: THe character to initialize the array
 *
 * Return: A pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[size] = '\0';

	return (ptr);
	free(ptr);
}

#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars ,and initialize
 *                it with a specific char.
 *
 * @size: the size of the array that will be created
 *
 * @c: the specific char that will initialize the array
 *
 * Return:A pointer to the array,or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	free(ptr);
}

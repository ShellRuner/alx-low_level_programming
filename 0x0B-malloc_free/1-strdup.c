#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 *           in memory
 *
 * @str: a pointer to the string given as a parameter
 *
 * Return: a pointer to the duplicated string or NULL if insufficient
 *         memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t length = 0;
	size_t i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = malloc((length + 1) * sizeof(char));
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
		return (&ptr[0]);
	}
	free(ptr);
}

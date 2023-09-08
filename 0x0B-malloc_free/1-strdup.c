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
	size_t length;

	/*while (*str != '\0')
	{
		str++;
		length++;
	}
	*/
	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str) + 1;
	ptr = malloc(length * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = memcpy(ptr , str, length);
		/*while (*str != '\0')
		{
			*ptr = *str;
			ptr++;
			str++;
		}
		return (ptr);
		*/
		return (ptr);
	}
	free(ptr);
}

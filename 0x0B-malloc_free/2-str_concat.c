#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *str_concat - A function that concatenates two strings
 *
 * @s1: the pointer on the first string
 *
 * @s2: the pointer on the second string
 *
 * Return: A pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t length1, length2;
	size_t i, i1, i2;

	i = 0;
	i1 = 0;
	i2 = 0;
	if (s1 == NULL || s1 != NULL)
	{
		length1 = strlen(s1);
	}
	if (s2 == NULL || s2 != NULL)
	{
		length2 = strlen(s2);
	}
	ptr = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[i] != '\0')
		{
			ptr[i1] = s1[i];
			i1++;
			i++;
		}
		while (s2[i2] != '\0')
		{
			ptr[i1] = s2[i2];
			i2++;
			i1++;
		}
		ptr[i1] = '\0';
		return (&ptr[0]);
	}
	free(ptr);
}

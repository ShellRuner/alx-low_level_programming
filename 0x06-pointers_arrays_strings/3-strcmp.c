#include "main.h"

/**
 * _strcmp - The function that compares two strings
 *
 * @s1: adress of the first string
 *
 * @s2: adress of the second string
 *
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

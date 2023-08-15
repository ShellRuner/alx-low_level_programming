#include "main.h"

/**
 *_strchr - Function that locates a character in a string
 *
 * @s: A pointer to the string were the character will be located
 *
 * @c: A variable which hold the character to locate
 *
 * Return: A pointer (s) to the first occurrence of the character c in s or
 *          (NULL)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

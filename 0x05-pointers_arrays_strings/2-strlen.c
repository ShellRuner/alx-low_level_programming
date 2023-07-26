#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: Parameter of the function and a char pointer
 *
 * Return: Always res (int)
 */
int _strlen(char *s)
{
	int res, length;

	length = 0;
	while (*s != 0)
	{
		s++;
		length++;
	}
	res = length;
	return (res);
}

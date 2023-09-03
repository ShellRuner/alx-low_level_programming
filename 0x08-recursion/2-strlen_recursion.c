#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 *
 * @s: Parameter of the function
 *
 * Return: and int (the length of the string)
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}

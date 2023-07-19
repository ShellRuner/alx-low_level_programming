#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: The argument of the function
 *
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}

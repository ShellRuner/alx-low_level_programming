#include "main.h"

/**
 *_isdigit - The function
 *
 * @c:the argument
 *
 * Return: Always res
 */
int _isdigit(int c)
{
	int res;

	if (c >= 48 && c <= 57)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}

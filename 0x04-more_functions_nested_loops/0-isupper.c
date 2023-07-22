#include "main.h"

/**
 * _isupper - The function
 *
 *@c: Argument of the function
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int res;

	if (c >= 65 && c <= 90)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}

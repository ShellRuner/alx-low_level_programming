#include "main.h"

/**
 * _islower - Entry point
 *
 *@c: The argument of the function
 *
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
	int result;

	for (c = 48; c <= 122; c++)
	{
		if (((c >= 48) && (c <= 57)) && ((c >= 97) && (c <= 122)))
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
	}

	return (result);
}

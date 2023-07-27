#include "main.h"

/**
 * puts_half - A function that prints half of a string
 *
 * @str: Tha adress of the string
 *
 * Return:Nothing
 */
void puts_half(char *str)
{
	int n, length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		for (n = (length - 1) / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = length / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

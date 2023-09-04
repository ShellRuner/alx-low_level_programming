#include "main.h"

/**
 * _pow_recursion - A function that return the value of x raised
 *                  to the power of y
 *
 * @x: the parameter that hold the base number
 *
 * @y: THe parameter that hold the exponent
 *
 * Return: always -1 (error)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

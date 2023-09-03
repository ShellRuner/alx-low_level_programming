#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 *
 * @n: Parameter of the function
 *
 * Return: always -1 (error)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		/*return (n * factorial(n-1) for n > 0*/
		return (-1);
	}
	else
	{
		/*return (-1) for n < 0*/
		return (n * factorial(n - 1));
	}
}

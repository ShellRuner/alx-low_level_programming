#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that print n elements of an array of int
 *
 * @a: Adress of the array
 *
 * @n: Dimenssion of the array
 *
 * Return:Nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	}
}

#include <stdio.h>
#include <stdlib.h>
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

	for (i = 0; i < n; i++)
	{
		if (i == abs(n) - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

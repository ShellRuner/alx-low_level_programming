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

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
	}
}

#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 *
 * @a: the adress of the array
 *
 * @n: the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, pass;

	for (i = 0; i < n / 2; i++)
	{
		pass = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = pass;
	}
}

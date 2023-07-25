#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 *
 * @a: First parameter of the function and pointer
 *
 * @b: Second parameter of the function and pointer
 *
 * Return: Nothing (void)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

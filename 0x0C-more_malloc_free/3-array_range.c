#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: param
 * @max:param
 *
 * Return:value
 */
int *array_range(int min, int max)
{
	int a, b;
	int *range;

	if (min > max)
		return (NULL);
	b = min;
	range = (int *) malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
	{
		range[a] = b;
		b++;
	}
	return (range);
}

#include "function_pointers.h"

/**
 * int_index - Function that search for an integer
 * @array: pr
 * @size: param
 * @cmp: param
 *
 * Return: a value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}

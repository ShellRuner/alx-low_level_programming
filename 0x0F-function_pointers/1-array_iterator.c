#include "function_pointers.h"

/**
 * array_iterator - A function that execute s a function given
 *                  as a parameter on each elmt of array
 * @array: a parameter
 * @size: parameter
 * @action: parameter
 *
 * Return: a value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given
 *                  as a parameter on each elmt f array
 * @array: An array of integer
 * @size: the size of the array
 * @action: a function pointer that execute fct on elmt of the
 *          array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL)
	{
		while (array[i] && i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}

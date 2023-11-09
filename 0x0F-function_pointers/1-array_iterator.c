#include "function_pointers.h"
#include <stdlib.h>

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
	int i = 0;

	if (array != NULL && size != 0)
	{
		while (array[i] && i < (*(&array + 1) - array))
		{
			(*action)(array[i]);
			i++;
		}
	}
}

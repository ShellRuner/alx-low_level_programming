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
	size_t i;

	for (i = 0 ; i < size; i++)
	{
		(*action)(array[i]);
	}
}

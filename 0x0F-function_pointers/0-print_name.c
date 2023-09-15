#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: A pointer that point on the name of the person
 *
 * @f: a function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}

#include "dog.h"

/**
 * free_dog - A function that frees dogs
 * @d: param
 *
 * Return: value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

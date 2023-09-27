#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type
 *            struct dog
 * @d: param
 * @name:param
 * @age: param
 * @owner: param
 *
 * Return: value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

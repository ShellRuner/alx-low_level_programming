#include "dog.h"

/**
 * init_dog - function that initilize a variable of type
 *            struct dog.
 * @d: variable adress
 * @name:name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	unsigned int i, e;

	d->name = malloc(sizeof(char) * strlen(name) + 1);
	d->owner = malloc(sizeof(char) * strlen(owner) + 1);
	for (i = 0; i < strlen(name); i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';

	d->age = age;

	for (e = 0; e < strlen(owner) + 1; e++)
	{
		d->owner[e] = owner[e];
	}
	d->owner[e] = '\0';
}

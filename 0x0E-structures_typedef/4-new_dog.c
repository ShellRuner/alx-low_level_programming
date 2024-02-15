#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: A pointer to a new dog ( success) or NUll
 *         (fall)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL || ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
		return (ptr);
	}
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
	}
}

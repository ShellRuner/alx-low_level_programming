#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: type that describe a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

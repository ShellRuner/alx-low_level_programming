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

/*
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif

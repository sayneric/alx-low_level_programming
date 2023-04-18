#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
		return;
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
	strcpy(d->owner, owner);
}
#endif

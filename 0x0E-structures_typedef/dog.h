#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stdlib.h>

/**
 * struct dog - a struct representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */


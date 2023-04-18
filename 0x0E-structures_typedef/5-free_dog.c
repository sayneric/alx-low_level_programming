#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog struct
 * @d: struct dog to free
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

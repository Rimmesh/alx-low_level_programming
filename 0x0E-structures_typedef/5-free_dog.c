#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocates a given struct dog
 * @d: struct dog we re going to free
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


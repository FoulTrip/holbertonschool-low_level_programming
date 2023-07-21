#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory dogs
 * @d: pointer of struct
 *
 * Return: Always 0.
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

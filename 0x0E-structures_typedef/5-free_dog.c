#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dog
 * @d: variable used
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

#include <stdio.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @name: variable used
 * @age: variable used
 * @owner: variable used
 * @d: def used
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: passing structure at the function
 * @name: store a strig for main
 * @age: store a number for main
 * @owner: store a strig for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Passing to stucture from main */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

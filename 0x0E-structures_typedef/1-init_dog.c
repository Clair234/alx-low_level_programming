#include "dog.h"

/**
 * init_dog - intializes a dog
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * owner: owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include "dog.h"
#include "string.h"

/**
 * init_dog - initailze a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name opernd
 * @age: age operand
 * @owner: owner operand
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

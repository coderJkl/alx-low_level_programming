#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints elements in a struct dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: 0");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

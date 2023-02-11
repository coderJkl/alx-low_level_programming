#include "dog.h"

/**
 * free_dog - Frees a dog struct
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	free(d);
}

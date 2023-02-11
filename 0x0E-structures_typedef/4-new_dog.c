#include "dog.h"

/**
 * new_dog - Creates a new dog of type struct dog
 * @name: name operand
 * @age: age operand
 * @owner: owner operand
 * Return: pointer to new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}

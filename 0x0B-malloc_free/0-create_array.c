#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(p) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

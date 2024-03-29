#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory in bytes
 * Return: pointer to memory or int
 */

void *malloc_checked(unsigned int b)
{
	malloc(b);
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}

#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: number of members
 * @size: size of data type
 * Return: null or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}

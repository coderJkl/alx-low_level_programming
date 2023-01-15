#include "main.h"
#include <string.h>

/**
 * _strdup - creates a pointer that points to a duplicate string
 * @str: string to duplicate
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	size_t i;

	ptr = malloc(sizeof(char) * strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(str) + 1; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

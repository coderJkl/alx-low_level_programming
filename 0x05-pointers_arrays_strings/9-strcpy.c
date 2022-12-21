#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string from a src to a dest
 * @dest: pointer to destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = strlen(src);

	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

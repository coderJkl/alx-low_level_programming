#include "main.h"
#include "string.h"

/**
 * _strncat - appends n bytes of string  from a *src string to another *dest
 * @src : source string
 * @dest: destination string
 * @n: number of bytes
 * Return: A character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest), k = 0;

	while (k < n)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

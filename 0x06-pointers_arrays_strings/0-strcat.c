#include "main.h"
#include "string.h"

/**
 * _strcat - appends a *src string to another *dest
 * @src : source string
 * @dest: destination string
 * Return: A character
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest), j = strlen(src), k = 0;

	while (k < j)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

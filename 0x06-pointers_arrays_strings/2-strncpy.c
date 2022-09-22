#include "main.h"
#include <string.h>
/**
 * strncpy - copies n characters from string src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of of characters in a string to cpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for (; i < n; i++)
	dest[i] = '\0';
		return (dest);
}

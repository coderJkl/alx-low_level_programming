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
	char *save = dest;

	for (; *dest; ++dest);
	while ((*dest++ = *src++) != '\0');
	return (save);
}

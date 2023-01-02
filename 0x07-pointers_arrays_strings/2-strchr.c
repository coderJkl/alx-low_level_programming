#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds a character c in a string
 * @s: pointer to string
 * @c: character
 * Return: Address of c or NULL
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	int count = 0;

	while (*s)
	{
		if (*s == c)
			return (p + count);
		count++;
		s++;
	}
	return (NULL);
}

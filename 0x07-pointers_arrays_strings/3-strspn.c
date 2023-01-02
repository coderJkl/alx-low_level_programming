#include "main.h"
#include <string.h>

/**
 * _strspn - Counts the bytes in  @s consisting only of bytes from @accept
 * @s: Parent string
 * @accept: string to compare
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *i;

	while (*s)
	{
		for (i = accept; *i; i++)
		{
			if (*s == *i)
				break;
		}
		if (*i == '\0')
			break;
		s++;
	}
	return ((unsigned int)(s - p));
}

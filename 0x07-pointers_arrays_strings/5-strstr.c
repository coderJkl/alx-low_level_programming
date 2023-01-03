#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates the first occurence in the string @s first byte of @acccept
 * @haystack: first operand
 * @needle: second operand
 * Return: pointer to the first byte that matches
 */

char *_strstr(char *haystack, char *needle)
{
	char *c, *p;
	int count = 0;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			p = haystack;
			for (c = needle; c != '\0'; c++)
				if (*p == *c)
				{
					p++;
					count++;
				}
			if (*c == '\0')
				return (p - count);
		}
		s++;
	}
	return (NULL);
}

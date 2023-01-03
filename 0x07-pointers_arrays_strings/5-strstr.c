#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates the occurence of the string acccept in string haystack
 * @haystack: string to check
 * @needle: string being checked for
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
			for (c = needle; *c != '\0'; c++)
			{
				if (*p == *c)
				{
					p++;
					count++;
				}
				else
				{
					count = 0;
					break;
				}
			}		
				if (*c == '\0')
					return (p - count);
		}
		haystack++;
	}
	return (NULL);
}

#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurence in the string @s any of @acccept
 * @s: first operand
 * @accept: second operand
 * Return: pointer to the first byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;
	
	while (*s)
	{
		for (p = accept; *p != '\0'; p++)
		{	
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (NULL);
}

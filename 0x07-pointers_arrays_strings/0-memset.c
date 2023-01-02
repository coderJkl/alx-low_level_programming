#include "main.h"

/**
 * _memset - fills n bytes of memory area pointed to by s with the const char b
 * @s: pointer to string
 * @b: character
 * @n: number of bytes to fill
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < (int) n; i++)
		s[i] = b;
	return (s);
}

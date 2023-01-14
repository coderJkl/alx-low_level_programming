#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates n bytes of a string to another
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 * Return: pointer to newly allocated mem space to s1 ns2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = malloc(sizeof(s1) * strlen(s1) + n + 1);
	size_t i, j;

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: string to concatenate to s1
 * Return: pointer to memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (; i < (strlen(s1) + strlen(s2)); i++)
		ptr[i] = *s2++;
	ptr[i] = '\0';
	return (ptr);
}

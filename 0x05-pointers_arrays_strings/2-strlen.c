#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: string variable
 * Return: a number greater than 1.
 */
int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

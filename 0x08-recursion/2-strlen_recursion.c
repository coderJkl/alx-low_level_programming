#include "main.h"

/**
 * _strlen_recursion - calculates the lengthe of a string
 * @s: string
 * Return: Length in byte
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return ((int) sizeof(*s) + _strlen_recursion(++s));
	return (0);
}

#include "main.h"

/**
 * string_toupper - changes all lower case letters of a string to upper
 * @s: string
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}

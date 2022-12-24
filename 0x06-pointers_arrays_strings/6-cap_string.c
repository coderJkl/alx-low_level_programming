#include "main.h"

/**
 * cap_string - changes all lower case letters of a string to upper
 * @s: string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == 32 || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == 46)
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 4 + '0';
		if (s[i] == 'e' || s[i] == 'E')
			s[i] = 3 + '0';
		if (s[i] == 'o' || s[i] == 'O')
			s[i] = 0 + '0';
		if (s[i] == 't' || s[i] == 'T')
			s[i] = 7 + '0';
		if (s[i] == 'l' || s[i] == 'L')
			s[i] = 1 + '0';
		i++;
	}
	return (s);
}

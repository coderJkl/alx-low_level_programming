#include "main.h"
#include <string.h>

/**
 * _strcmp - compares string s1 and s2
 * @s1: firt operand
 * @s2: second operand
 * Return: 0 (thesame), 1 (if s1 > s2) and 2 (if s1 < s2)
 */

int _strcmp(char *s1, char *s2)
{
	const unsigned char *p1 = (const unsigned char *) s1;
	const unsigned char *p2 = (const unsigned char *) s2;
	unsigned char c1, c2;

	do {
		c1 = (unsigned char) *p1++;
		c2 = (unsigned char) *p2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);
	return (c1 - c2);
}

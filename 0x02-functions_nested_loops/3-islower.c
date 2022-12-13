#include "main.h"
/**
 * _islower - program checks if a character is in lower case
 * @c: a character variable
 *
 * Return: 1(lowercase) or 0(otherwise)
 */
int _islower(int c)
{
	if (c >= 95 &&  c <= 122)
		return (1);
	else
		return (0);
}

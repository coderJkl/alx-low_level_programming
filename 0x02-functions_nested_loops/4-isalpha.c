#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: character
 *
 * Return: 1 (lowercase) or 0 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

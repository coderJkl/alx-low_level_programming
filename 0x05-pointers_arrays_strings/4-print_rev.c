#include "main.h"
#include <string.h>
/**
 * print_rev -  prints a reversed string and a new line, to stdout
 * _strlen - counts the characters in a string
 * @s: pointer to string
 * Return: reverse strings plus new-line
 */
void print_rev(char *s)
{
	int i, k;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		k = s[i];
		_putchar(k);
		--i;
	}
	_putchar('\n');
}

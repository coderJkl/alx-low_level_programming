#include "main.h"
#include <string.h>
/**
 * puts_half -  prints half the characters in a string.
 * _strlen - counts the characters in a string
 * @str: pointer to string
 * Return: reverse strings plus new-line
 */
void puts_half(char *str)
{
	int i, m, j;

	m = strlen(str);
	if (m % 2 == 0)
	{
	i = m / 2;
	for (; i < m; ++i)
	{
		j = str[i];
		_putchar(j);
	}
	_putchar('\n');
	}
	else
		--m;

}

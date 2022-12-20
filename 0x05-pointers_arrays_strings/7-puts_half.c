#include "main.h"
#include <string.h>

/**
 * _strlen - counts the characters in a string
 * @str: pointer to string
 * Return: reverse strings plus new-line
 */

void puts_half(char *str)
{
	int i = strlen(str);

	if (i % 2 != 0)
		i = i - 2;
	i = i / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

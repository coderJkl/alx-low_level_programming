#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i, n, length = strlen(str);

	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		i = length - n;
	}
	else
	{
		n = length / 2;
		i = n;
	}
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

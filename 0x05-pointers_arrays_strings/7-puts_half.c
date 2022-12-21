#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int length = strlen(str), n;

	if (length % 2 != 0)
		n = (length - 1) / 2;
	else
		n = length / 2;
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

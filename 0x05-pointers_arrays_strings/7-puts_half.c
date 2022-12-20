#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i = strlen(str);

	if (i % 2 != 0)
		i = i - 2;
	i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

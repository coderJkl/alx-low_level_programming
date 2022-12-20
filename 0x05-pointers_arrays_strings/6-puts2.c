#include "main.h"
#include <string.h>

/**
 * puts2 - prints every eventh character in a string
 * @str: pointer to string
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}

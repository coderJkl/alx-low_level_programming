#include "main.h"
#include <string.h>

/**
 * puts2 - prints every eventh character in a string
 * @str: pointer to string
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

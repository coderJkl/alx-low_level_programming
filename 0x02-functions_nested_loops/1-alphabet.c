#include "main.h"
/**
 * print_alphabet - prints the letters of the alphabet to stdout
 *
 * _putchar - prints a character to the stdout
 *
 * Return: 0 always (success)
*/
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');
}

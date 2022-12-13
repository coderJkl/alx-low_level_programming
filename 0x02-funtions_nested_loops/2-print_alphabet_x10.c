#include "main.h"
/**
 * print_alphabet_x10 - prints the lower case alphabets 10x
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i, x;

	i = 0;
	while (i < 10)
	{
		for (x = 0; x < 26; x++)
			_putchar('a' + x);
		_putchar('\n');
		i++;
	}
}

#include "main.h"
/**
 * main - program prints the letters of the alphabet to stdout
 *
 * _putchar - prints a character to the stdout
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 25; i++)
		_putchar('a' + i);
	_putchar('\n');
return (0);
}

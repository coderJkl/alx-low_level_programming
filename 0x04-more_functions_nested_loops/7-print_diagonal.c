#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of '_' to be used
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			print_space(i);
			_putchar('\\');
			_putchar('\n');
			++i;
		}
	}
	else
		_putchar('\n');
}

/**
 * print_space - print spaces
 * @n: operand
 */

void print_space(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(' ');
		i++;
	}
}

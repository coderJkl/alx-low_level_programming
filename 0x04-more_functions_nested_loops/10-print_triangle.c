#include "main.h"

/**
 * print_triangle - prints triangles
 * @size: size operand
 * Return: 0 (success)
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int x;
		int count;
		int i;

		count = size - 1;
		i = 0;
		while (i < size)
		{
			x = 0;
			print_space(count);
			for (x = 0; x <= i; x++)
			_putchar('#');
			_putchar('\n');
			count--;
			i++;
		}
	}
	else
		_putchar('\n');
}
/**
 * print_space - print spaces
 * @n: operand for number of spaces
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

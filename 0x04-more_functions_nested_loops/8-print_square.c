#include "main.h"

/**
 * print_sqaure - prints n long sqares followed by a new line
 * @size: sqaure width
 *
 * Return: Always 0 (on success)
 */

void print_sqaure(int size)
{
	if (size > 0)
	{
		int i = 0;

		for (; i < size; i++)
			_putchar('#');
		_putchar('\n');
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_square - prints n long sqares followed by a new line
 * @size: sqaure width
 *
 * Return: Always 0 (on success)
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int x = 0;

			for (; x < size; x++)
				_putchar('#');
			_putchar('\n');
			i++;
		}

	}
	else
		_putchar('\n');
}

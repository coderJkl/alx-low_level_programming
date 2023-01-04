#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a sqr matrics
 * @a: 2 dimensional array of integers
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = size - 1, j = 0;
	long int count = 0;

	while (i >= 0 && j < size)
	{
		count += *(a + (j * 3 + i) * size);
		j++;
		i--;
	}
	my_putchar(count);
	_putchar(',');
	_putchar(' ');
	count = 0;
	j = 0;

	for (i = 0; i < size && j < size; i++)
	{
		count += *(a + (j * 3 + i) * size);
		j++;
	}
	my_putchar(count);
	_putchar('\n');
}

/**
 * my_putchar - prints long integer
 * @n: number
 */

void my_putchar(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		my_putchar(n / 10);
	}
	_putchar(n % 10 + '0');
}

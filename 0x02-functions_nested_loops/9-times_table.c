#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int i, k;

	i = 0;
	while (i <= 9)
	{
		for (k = 0; k <= 9; k++)
		{
			if (i * k < 10)
				_putchar(' ');
			my_putchar(i * k);
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
/**
 * my_putchar - prints long integer
 * @n: operand
 *
 * Return: void
 */

void my_putchar(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		my_putchar(n / 10);
	_putchar(n % 10 + '0');
}

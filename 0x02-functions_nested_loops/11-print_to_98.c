#include "main.h"

/**
 * print_to_98 - prints starting from an nth term to 98
 * @n: number
 * my_putchar - prints longs
 * @n: number
 * Return: 0 always
 */
void my_putchar(int n);
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = 0; a <= 98 - n; a++)
		{
			my_putchar(n + a);
			if (n + a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
	if (n > 98)
	{
		for (a = 0; a <= n - 98; a++)
		{
			my_putchar(n - a);
			if (n - a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar ('\n');
	}
}

void my_putchar(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		my_putchar(n / 10);
	_putchar((n % 10) + '0');
}

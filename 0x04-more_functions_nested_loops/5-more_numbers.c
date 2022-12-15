#include "main.h"

/**
 * more_numbers - priints the numbers 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			my_putchar(n);
		}
		_putchar('\n');
		i++;
	}
}

/**
 * my_putchar - prints long int byte by byte recursively
 * @n: number
 * Return: void
 */
void my_putchar(int n)
{
	if (n / 10)
		my_putchar(n / 10);
	_putchar(n % 10 + '0');
}

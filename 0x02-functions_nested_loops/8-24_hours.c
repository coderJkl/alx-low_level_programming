#include "main.h"
/**
 * jack_bauer - prints every minutes of the day starting from 00:00 to 23:59
 *
 * Return: Always 0 (on success)
 */
void jack_bauer(void)
{
	int i, j, m, n;

	i = 0;
	while (i < 2)
	{
		for (j = 0; j < 10; j++)
		{
			for (m = 0; m < 6; m++)
			{
				for (n = 0; n < 10; n++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
				}
			}
		}
		i++;
	}
	for (j = 0; j < 4; j++)
	{
		for (m = 0; m < 6; m++)
		{
			for (n = 0; n < 10; n++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(m + '0');
				_putchar(n + '0');
				_putchar('\n');
			}
		}
	}
}

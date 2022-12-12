#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 3 digits
 *
 * Return: Always zero
*/

int main(void)
{
	int num = 0;
	int a, b, c;

	while (num <= 999)
	{
		a = (num / 100 + '0');
		b = ((num % 100) / 10 + '0');
		c = (num % 10 + '0');
		if (a < b && a < c)
		{
			putchar(a);
			putchar(b);
			putchar(c);
			if (num != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++num;
	}
	putchar('\n');
	return (0);
}

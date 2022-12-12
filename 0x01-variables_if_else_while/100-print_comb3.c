#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 *
 * Return: Always zero
*/

int main(void)
{
	int num = 0;
	int a, b;

	while (num <= 99)
	{
		a = (num / 10 + '0');
		b = (num % 10 + '0');
		if (a < b)
		{
			putchar(a);
			putchar(b);
			if (num != 89)
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

#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * subtituting "fizz" and "buzz" for multilples of 3 and 5
 * and "fizzbuzz" for multiples of both 3 and 5
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int i = 1;

	while (i > 0 && i <= 100)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}

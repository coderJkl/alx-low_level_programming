#include <stdio.h>

/**
 * main - prints sum of the multiples of 3 or 5 below 1024
 *
 * Return: 0 Always (on success)
 */
int main(void)
{
	int tmp;
	int n;

	tmp = 0;
	n = 0;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			tmp += n;
		n++;
	}
	printf("%d", tmp);
	putchar('\n');
	return (0);
}

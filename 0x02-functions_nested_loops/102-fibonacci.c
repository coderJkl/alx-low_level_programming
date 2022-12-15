#include <stdio.h>

/**
 * main - program prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int n;
	int i, tmp1, tmp2;

	i = 0;
	n = 1;
	while (i < 25)
	{
		printf("%ld, ", n);
		tmp1 = n;
		n += tmp1;
		printf("%ld, ", n);
		tmp2 = n;
		n = tmp1 + tmp2;
		i++;
	}
	putchar('\n');
	return (0);
}

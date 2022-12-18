#include <stdio.h>

/**
 * main - program prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	long int f1 = 1, f2 = 2;

	long int f = f1 + f2;

	printf("%ld, %ld, ", f1, f2);
	for (i = 3; i <= 50; ++i)
	{
		printf("%ld, ", f);
		f1 = f2;
		f2 = f;
		f = f1 + f2;
	}
	putchar('\n');
	return (0);
}

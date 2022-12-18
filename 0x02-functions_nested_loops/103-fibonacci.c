#include <stdio.h>
/**
 * main - program prints sum of the Even fibonacci numbers less than 4000000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int sum = 2;

	long int f1 = 1, f2 = 2;

	long int f = f1 + f2;

	while (f <= 4000000)
	{
		if (f % 2 == 0)
			sum += f;
		f1 = f2;
		f2 = f;
		f = f1 + f2;
	}
	printf("%ld\n", sum);
	return (0);
}

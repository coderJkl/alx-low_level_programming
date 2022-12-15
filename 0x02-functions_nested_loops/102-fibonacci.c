#include <stdio.h>

/**
 * main - program prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, n , tmp1, tmp2;

	i = 0;
	n = 1;
	while (i < 50)
	{
		printf("%d\n", n);
		tmp1 = n;
		n += tmp1;
		printf("%d\n", n);
		tmp2 = n;
		n = tmp1 + tmp2;	
		i++;
	}
	return (0);
}

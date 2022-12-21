#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers and a \n
 * @a: pointer to array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		if (i == n - 1)
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}

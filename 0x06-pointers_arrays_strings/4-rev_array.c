#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int copy[50];	
	int i = 0;
	int x = n - 1;

	while (i < n)
	{
		copy[i] = a[i];
		i++;	
	}
	for (i = 0; i < n; i++)
	{
		a[i] = copy[x];
		x--;
	}
}

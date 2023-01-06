#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number
 * Return: sqrt of the number or -1
 */
int k = 1;

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (k * k <= n && (k + 1) * (k + 1) > n)
	{
		if ( n % k == 0)
			return k;
		else 
			return (-1);
	}
	else
	{
		k = (k + n / k) / 2;
		return (_sqrt_recursion(n));
	}
	return (-1);
}

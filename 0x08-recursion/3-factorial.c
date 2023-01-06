#include "main.h"

/**
 * factorial - Gets the factorial of a given number
 * @n: number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}

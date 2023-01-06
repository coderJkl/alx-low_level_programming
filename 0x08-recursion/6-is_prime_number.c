#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 * Return: 1 True or 0 False
 */

int is_prime_number(int n)
{
	int check = primeno(n, n / 2);
	return (check);
}

/**
 * primeno - determines if a number is prime or not
 * @num: number
 * @i: iterator
 * Return: 1 or 0
 */

int primeno(int num, int i)
{
	if (i == 1)
	{
		return 1;
	}
	else
	{
		if (num % i == 0)
		{
			return 0;
		}
		else
		{
			return primeno(num, i - 1);
		}
	}
}

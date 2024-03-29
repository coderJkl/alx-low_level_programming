#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters in the command line
 * @n: first operand
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			sum += va_arg(ap, int);
			i++;
		}

		va_end(ap);
		return (sum);
	}
	return (0);
}

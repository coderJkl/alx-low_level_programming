#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to string
 * Return: 0 or int convert
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	unsigned int len = strlen(b);

	if (b == NULL)
		return (0);
	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mul;
		mul *= 2;
	}

	return (num);
}

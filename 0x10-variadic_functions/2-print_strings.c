#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings seperated by a seperator
 * @separator: string to seperate with
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			str = va_arg(ap, char*);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	putchar('\n');
}

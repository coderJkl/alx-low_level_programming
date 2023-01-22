#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints a number followed by a new line
 * @seperator: string to be printed btw numbers
 * @n: number of int passed to the function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;


	if (seperator != NULL && n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				print_string(seperator);
			i++;
		}
		putchar('\n');
		va_end(args);
	}
}

/**
 * print_string - prints a string
 * @s: string to print
 */
void print_string(const char *s)
{
	int x = 0;

	while (s[x])
	{
		putchar(s[x]);
		x++;
	}
	putchar(' ');
}

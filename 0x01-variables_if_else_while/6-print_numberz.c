#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 ( on success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a % 11 + '0');
	}
	putchar('\n');
	return (0);
}

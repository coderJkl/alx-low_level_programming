#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero
*/

int main(void)
{
	int x, count;

	count = 0;
	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (x = 0; x < 6; x++)
	{
		putchar('a' + count);
		count++;
	}
	putchar('\n');

	return (0);
}

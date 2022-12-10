#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero
*/

int main(void)
{
	char i = 'z';

	while (i >= 'a' && i <= 'z')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

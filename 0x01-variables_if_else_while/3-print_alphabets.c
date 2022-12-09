#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero
*/

int main(void)
{
	char i = 'a';

	while (i >= 'a' && i <= 'z')
		{
			putchar(i);
			i++;
		}
	i = 'A';
	while (i >= 'A' && i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

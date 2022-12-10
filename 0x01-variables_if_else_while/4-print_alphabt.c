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
		if (i == 'q' || i == 'e')
			i++;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

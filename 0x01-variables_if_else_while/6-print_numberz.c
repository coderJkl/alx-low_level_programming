#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 ( on success)
 */
void my_putchar(int var);

int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		my_putchar(a);
	}
	putchar('\n');
	return (0);
}

void my_putchar(int var) {

    /* print '-' for negative numbers */
    if (var < 0) {
        putchar('-');
        var = var * -1;
    }

    /* First remove the last digit of number and print
    the remaining digits using recursion, then print
    the last digit
 */
    if (var/10)
        my_putchar(var/10);

    putchar(var%10 + 0);
}

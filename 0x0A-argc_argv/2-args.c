#include <stdio.h>
#include <stdlib.h>

/**
 * main - To test the program
 * @argc: the number of command line argument
 * @argv: An array containing the program commland line arguments
 * Return: 0
 */

int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

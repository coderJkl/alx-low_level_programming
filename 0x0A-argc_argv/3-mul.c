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

	if (argc == 3)
	{
		printf("%d\n", atoi((argv[1])) * atoi(argv[2]));
		return (0);
	}
	return (1);
}

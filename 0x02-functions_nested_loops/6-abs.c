#include "main.h"
/**
 * _abs - program computes the absolute value of an integer.
 * @j: integer argument
 *
 * Return: Return absolute value of integer
 */
int _abs(int j)
{
	if (j < 0)
		return (j * -1);
	if (j == 0)
		return (0);
	else
		return (j);
}

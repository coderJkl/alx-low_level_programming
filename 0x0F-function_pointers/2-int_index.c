#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array operand
 * @size: size of the array operand
 * @cmp: pointer to function
 * Return: integer that it matches (On Success) or -1 (On failure to match)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	return (-1);
	}
}

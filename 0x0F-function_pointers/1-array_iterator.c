#include "function_pointers.h"

/**
 * array_iterator - function executes a function given as a parameter
 * on each element of an array
 * @array: array operand
 * @size: size of the array operand
 * @action: pointer to function operand
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}

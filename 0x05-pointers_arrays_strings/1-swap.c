#include "main.h"
/**
* swap_int - swaps the value of two int
* @a:int pointer
* @b:int pointer
*/
void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;
	*a = n;
	*b = m;
}

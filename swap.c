#include "sort.h"

/**
 * swap_int - swaps two integers
 * @a: the first
 * @b: the next
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

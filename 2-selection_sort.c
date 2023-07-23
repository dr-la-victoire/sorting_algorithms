#include "sort.h"

/**
 * selection_sort - sorts an array of ints using the selection sorting algo
 * @array: the array of ints
 * @size: the size
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int smallest;

	for (i = 0; i < size - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallest])
			{
				smallest = j;
			}
		}
		swap_int(&array[smallest], &array[i]);
		print_array(array, size);
	}
}

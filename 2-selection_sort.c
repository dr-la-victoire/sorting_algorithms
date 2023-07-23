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
	int temp;

	if (size < 2)
		return;
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
		temp = array[smallest];
		array[smallest] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}

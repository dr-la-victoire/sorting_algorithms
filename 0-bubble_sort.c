#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the bubble sort algorithm
 * @array - the array of ints
 * @size: the size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++) /* getting each array element */
	{
		for (j = 0; j < size - i - 1; j++) /* comparing each array element */
		{ /* condition is as all the largest elements go to the end of the list */
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
			}
		}
	}
}

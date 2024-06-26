#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: The array of integers to be sorted.
 * @size: The number of elements in the array.
 *
 * Return: No Return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int swapped;

	if (size < 2)
		return;

	for (i = 0; i <= size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j <= size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}

#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 *  order using the Selection sort algorithm
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: No Return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, n, s_index;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		s_index = i + 1;

		for (n = i + 1; n < size; n++)
			if (array[n] < array[s_index])
				s_index = n;

		if (array[i] > array[s_index])
		{
			temp = array[i];
			array[i] = array[s_index];
			array[s_index] = temp;
			print_array(array, size);
		}
	}
}

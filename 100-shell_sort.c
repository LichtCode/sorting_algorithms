#include "sort.h"
#include <stdio.h>
/**
 * _swap - swaps 2 value.
 * @array: the array for swap him values.
 * @arr_index1: First index
 * @arr_index2: Second index
 * Return: Nothing
 */
void _swap(int *array, int arr_index1, int arr_index2)
{
	int temp;

	if (array[arr_index1] != array[arr_index2])
	{
		temp = array[arr_index1];
		array[arr_index1] = array[arr_index2];
		array[arr_index2] = temp;
	}
}

/**
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1,  i, j;

	if (size < 2)
		return;

	while (gap <= size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
			for (j = i; j >= gap && array[j] < array[j - gap]; j -= gap)
				_swap(array, j, j - gap);
		gap /= 3;
		print_array(array, size);
	}
}

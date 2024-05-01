#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two values in an array
 *
 * @array: data to sort
 * @arr_index1: first value
 * @arr_index2: second value
 * @size: size of data
 *
 * Return: No Return
 */
void swap(int *array, int size, int arr_index1, int arr_index2)
{
	int temp;

	if (array[arr_index1] != array[arr_index2])
	{
		temp = array[arr_index1];
		array[arr_index1] = array[arr_index2];
		array[arr_index2] = temp;
		print_array(array, size);
	}
}

/**
 * partition - sorts a partition of data in relation to a pivot
 *
 * @array: data to sort
 * @size: size of data
 * @arr_start: Left wall
 * @arr_end: right wall
 *
 * Return: New pivot
 */
int partition(int *array, size_t size, int arr_start, int arr_end)
{
	int i = arr_start, j = arr_end - 1, pivot = arr_end;

	while (j > i)
	{
		if (array[i] <= array[pivot])
			i++;
		else if (array[j] > array[pivot])
			j--;
		else
		{
			swap(array, size, i, j);
		}

	}
	if (array[j] > array[pivot])
	{
		swap(array, size, j, pivot);
		return (i);
	}
	else
		return (pivot);
}




/**
 * quicksort -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Lomuto partition scheme
 *
 * @array: data to sort
 * @size: size of data
 * @arr_start: Left wall
 * @arr_end: right wall
 *
 * Return: No Return
 */
void quicksort(int *array, size_t size, int arr_start, int arr_end)
{
	int pivot;

	if (arr_start < arr_end)
	{
		pivot = partition(array, size, arr_start, arr_end);

		quicksort(array, size, arr_start, pivot - 1);
		quicksort(array, size, pivot + 1, arr_end);
	}
}

/**
 * quick_sort -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Lomuto partition scheme
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: No Return
 */
void quick_sort(int *array, size_t size)
{

	if (size < 2)
		return;

	quicksort(array, size, 0, size - 1);
}

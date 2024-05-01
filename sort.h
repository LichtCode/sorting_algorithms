#ifndef SORT_H
#define SORT_H


#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Print Functions HeLper */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/* Sorting Algorithms Functions */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void _swap(listint_t *node1, listint_t *node2);
void swap(int *array, int size, int arr_index1, int arr_index2);
void quicksort(int *array, size_t size, int arr_start, int arr_end);
int partition(int *array, size_t size, int arr_start, int arr_end);


/*Advanced Tasks*/


#endif /* SORT_H */

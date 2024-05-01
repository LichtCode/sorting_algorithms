#include "sort.h"

/**
 * _swap - Swaps two nodes of doubly linked list
 *
 * @node1: node base to change
 * @node2: double linked list head
 *
 * Return: No Return
 */
void _swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;

	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

}
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: doubly linked list
 *
 * Return: No Return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *curr;

	if (!list || !(*list) ||  !((*list)->next))
		return;

	temp = (*list)->next;
	while (temp)
	{
		curr = temp;
		while (curr && curr->prev)
		{
			if (curr->prev->n > curr->n)
			{
				_swap(curr->prev, curr);
				if (!curr->prev)
					*list = curr;
				print_list(*list);
			}
			else
				curr = curr->prev;
		}
		temp = temp->next;
	}
}

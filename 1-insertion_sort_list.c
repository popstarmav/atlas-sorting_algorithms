#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of
 * integers in ascending order using Insertion sort
 * @list: Pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *swap_node, *previous_node;

	if (!list || !*list)
		return;

	node = (*list)->next;

	while (current_node)
	{
		swap_node = current_node;

		while (swap_node->prev && swap_node->n < swap_node->prev->n)
		{
			previous_node = swap_node->prev;
			/* Swap the nodes */

			if (previous_node->prev)

			previous_node->prev->next = swap_node;

			if (swap_node->next)

			swap_node->next->prev = previous_node;
			previous_node->next = swap_node->next;
			swap_node->prev = previous_node->prev;
			swap_node->next = previous_node;
			previous_node->prev = swap_node;

			if (!swap_node->prev)

			*list = swap_node;
			print_list(*list);

			if (previous_node->prev)
			swap_node = previous_node->prev;

			else
				break;
		}
		node = node->next;
	}
}


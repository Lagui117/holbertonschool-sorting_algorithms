#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr)
	{
		tmp = curr->next;
		prev = curr->prev;

		while (prev && curr->n < prev->n)
		{
			/* Swap nodes */
			if (prev->prev)
				prev->prev->next = curr;
			else
				*list = curr;

			if (curr->next)
				curr->next->prev = prev;

			prev->next = curr->next;
			curr->prev = prev->prev;
			curr->next = prev;
			prev->prev = curr;

			print_list(*list);
			prev = curr->prev;
		}
		curr = tmp;
	}
}

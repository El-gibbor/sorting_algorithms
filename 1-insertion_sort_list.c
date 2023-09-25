#include "sort.h"

/**
  * insertion_sort_list - sorts a doubly linked list of integers in ascending
  * order using the Insertion sort algorithm
  * @list: The linkex list to sort
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *prev;

	if (!list || !(*list)->next)
		return;

	head = *list;

	while (head)
	{
		prev = head->prev;
		while (prev && (prev->n) > (head->n))
		{
			swap(prev, head, list);
			print_list(*list);
			prev = head->prev;
		}
		head = head->next;
	}
}

/**
  * swap - Swaps two nodes in a doubly linked list
  * @node1: The first node
  * @node2: The second node
  * @head: The linked list containing the nodes
  */

void swap(listint_t *node1, listint_t *node2, listint_t **head)
{
	listint_t *temp1, *temp2;

	if (node1 == NULL || node2 == NULL)
		return;

	temp1 = node1->prev;
	temp2 = node2->next;

	if (temp1)
		temp1->next = node2;
	if (temp2)
		temp2->prev = node1;
	node1->next = temp2;
	node1->prev = node2;
	node2->next = node1;
	node2->prev = temp1;
	if (temp1 == NULL)
		*head = node2;
}
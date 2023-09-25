#ifndef SORT_H
#define SORT_H

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

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap(listint_t *node1, listint_t *node2, listint_t **head);
void quick_sort(int *array, size_t size);
int partition(int *arr, int start_idx, int last_idx, int size);
void quick(int *arr, int start_idx, int last_idx, int size);
void selection_sort(int *array, size_t size);
int index_of_min(int *arr, int start_index, size_t size);
#endif

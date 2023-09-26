#include "sort.h"

/**
  * quick_sort - algorithm used to sort in ascending order
  * @array: The array to be sorted
  * @size: The size of the array
  */
void quick_sort(int *array, size_t size)
{
	quick_recursive(array, 0, size - 1, size);
}

/**
  * partition - Partitions an array
  * @start_idx: The start index
  * @last_idx: The last idex
  * @arr: The array that is being sorted
  * @size: The size of the array
  * Return: The index of the pivot
  */
int partition(int *arr, int start_idx, int last_idx, int size)
{
	int pivot = arr[last_idx];
	int i = start_idx - 1;
	int temp, j;

	for (j = start_idx; j < last_idx; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				print_array(arr, size);
			}
		}
	}
	if (last_idx != i + 1)
	{
		temp = arr[last_idx];
		arr[last_idx] = arr[i + 1];
		arr[i + 1] = temp;

		print_array(arr, size);
	}
	return (i + 1);
}

/**
  * quick_recursive - performs the quick sort recursively
  * @start_idx: The starting index
  * @last_idx: The last index
  * @arr: The array we are sorting
  * @size: The size of the array
  */
void quick_recursive(int *arr, int start_idx, int last_idx, int size)
{
	int pivot_idx;

	if (start_idx < last_idx)
	{
		pivot_idx = partition(arr, start_idx, last_idx, size);
		quick_recursive(arr, start_idx, pivot_idx - 1, size);
		quick_recursive(arr, pivot_idx + 1, last_idx, size);
	}
}
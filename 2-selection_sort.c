#include "sort.h"

/**
  * selection_sort - algorithm that sorts in asceding order
  * @array: The array to be sorted
  * @size: The size of the array
  */

void selection_sort(int *array, size_t size)
{
	unsigned int i;
	int temp, index;

	for (i = 0; i < size; i++)
	{
		index = index_of_min(array, i, size);

		if (index != -1)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}

/**
  * index_of_min - Looks for smallest element in a sub-array
  * @arr: The array
  * @start_index: The index to start checking from
  * @size: Size of the array
  * Return: The index of the minimum number in the sub-array
  */
int index_of_min(int *arr, int start_index, size_t size)
{
	int min_value = arr[start_index];
	int min_index = start_index;
	unsigned int i;

	for (i = start_index + 1; i < size; i++)
	{
		if (arr[i] < min_value)
		{
			min_index = i;
			min_value = arr[i];
		}
	}
	if (min_index == start_index)
		return (-1);
	return (min_index);
}
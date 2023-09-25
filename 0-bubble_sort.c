#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 * Return: void (Nothing)
 */
void bubble_sort(int *array, size_t size)
{
	int bubble_up;
	size_t i, j, arr_size = size - 1;

	for (i = 0; i < arr_size; i++)
	{
		/* size - i - 1 avoids redundant comparism of sorted elems*/
		for (j = 0; j < arr_size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				bubble_up = array[j];
				array[j] = array[j + 1];
				array[j + 1] = bubble_up;
				print_array(array, arr_size);
			}
		}
	}
}

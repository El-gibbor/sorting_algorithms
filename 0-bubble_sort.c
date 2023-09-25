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
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* size - i - 1 avoids redundant comparism of sorted elems */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				bubble_up = array[j];
				array[j] = array[j + 1];
				array[j + 1] = bubble_up;
				print_array(array, size);
			}
		}
	}
}

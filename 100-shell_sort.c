#include "sort.h"

/**
 * shell_sort - sorts ints in ascending order with Knuth's sequence.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	size_t gap, i, j;
	int temp;

	/* Calculate initial gap using Knuth's sequence */
	for (gap = 1; gap < size / 3;)
		gap = gap * 3 + 1;

	/* Perform shell sort with decreasing gaps */
	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			/* Perform insertion sort within the gap */
			while (j >= gap && array[j - gap] > array[j])
			{
				temp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = temp;
				j -= gap;
			}
		}
		print_array(array, size);
	}
}

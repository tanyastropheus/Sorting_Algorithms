#include "sort.h"
/**
 * swap - swaps 2 elements of an array
 * idx1 - index to swap
 * idx2 - 2nd idx to swap
 */
void swap(int **array, int idx1, int idx2)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}

/**
 * partition - partitions an array
 *
 */
int partition(int **array, size_t size, int start, int end)
{
	int pivot = array[size - 1];
	p_index = start;
/* iterating through array */
	for (i = start; i < end; i++)
	{
/* if element < pivot, swap element with p_index and increment p_index */
		if (array[i] <= pivot)
		{
			swap(array, array[i], array[p_index]);
			     p_index++;
		}
	}
	swap(array, array[p_index], array[end]);
	return (p_index);
}

/**
 * quick_sort_rec - quick sort recursively
 * @array: array to be sorted
 * @start: starting index
 * @end: ending index
 */
void quick_sort_rec(int **array, int start, int end)
{
	if (start <= end)
	{

	}
}

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{

}

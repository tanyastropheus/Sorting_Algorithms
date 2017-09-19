#include "sort.h"
/**
 * swap - swaps 2 elements of an array
 * idx1 - index to swap
 * idx2 - 2nd idx to swap
 */
void swap(int *elem1, int *elem2)
{
	int temp;

	temp = *elem1;
	*elem1 = *elem2;
	*elem2 = temp;
}

/**
 * partition - partitions an array
 *
 */
int partition(int *array, size_t size, int start, int end)
{
	int p_index,  pivot, i;

	pivot = array[size - 1];
	p_index = start;
/* iterating through array */
	for (i = start; i < end; i++)
	{
/* if element < pivot, swap element with p_index and increment p_index */
		if (array[i] <= pivot)
		{
			swap(&array[i], &array[p_index]);
			     p_index++;
		}
	}
/* p_index = separation of elements greater/less than pivot */
/* swap pivot to p_index of array */
	swap(&array[p_index], &array[size-1]);
	return (p_index);
}

/**
 * quick_sort_rec - quick sort recursively
 * @array: array to be sorted
 * @start: starting index
 * @end: ending index
 */
void quick_sort_rec(int *array, size_t size, int start, int end)
{
	int p_index;

	if (start <= end)
	{
		p_index = partition(array, size, start, end);
/* sort left of p_index */
		quick_sort_rec(array, size, start, p_index - 1);
/* sort right of p_index */
		quick_sort_rec(array, size, p_index + 1, end);
	}
}

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_rec(array, size, 0, size - 1);
}

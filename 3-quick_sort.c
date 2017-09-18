#include "sort.h"
/**
 * swap - swap two elements in an array
 * @array: pointer to integer array
 * @idx_1: index of the first element to be swapped
 * @idx_2: index of the second element to be swapped
 * Return: void
 */

void swap(int *array, int idx_1, int idx_2)
{
	int temp;

	/* do we need to switch array ptr if we switch 1st elem? */
	/* guess not */
	temp = array[idx_1];
	array[idx_1] = array[idx_2];
	array[idx_2] = temp;
}


/**
 * partition_lomuto - parition the array with Lomuto pivot for quick sort
 * @array: pointer to integer array
 * @start_idx: starting index of the array
 * @end_idx: ending index of the array
 * Return: index of the pivot element in the array
 */

unsigned int partition_lomuto(int *array, int start_idx, int end_idx)
{
	unsigned int i, parti_idx, pivot;

	pivot = array[end_idx];
	i = 0;
	while (i < end_idx)  /* loop through elem in the array excluding pivot */
	{
		if (array[i] <= pivot)  /* if elem is less/equal to pivot */
		{
			if (parti_idx != i)  /* swap only when elems are different */
				swap(array, array[parti_idx], array[i]);

			parti_idx++;  /* tracking the divide position btw less & more elems */
		}
		i++;
	}
	swap(array, array[p_idx], pivot);  /* swap pivot with the divide */

	return (parti_idx);
}

/**
 * selection_sort - sorts an array of integers in ascending order using
 * selection sort
 * @array: pointer to an array of integers
 * @size: size of the array
 * Return: void
 */

/* Is it possible to optimize unnecessary looping when sorting is done? */
void selection_sort(int *array, size_t size)
{
	int i, j;
	unsigned int idx;
	int temp;
	short flag;

	i = -1;
	while (i < (int)size - 1)  /* times loop through the array; (n - 1) */
	{
		flag = 0;
		j = i + 1;  /* only loop through unsorted elem */
		temp = array[j];  /* holding value for comparison */
		while (j < (int)size - 1)
		{
			if (temp > array[j + 1])  /* compare against each subsequent elem */
			{
				temp = array[j + 1];
				idx = j + 1;  /* holding index of the smaller elem */
				flag = 1;
			}
			j++;
		}
		if (flag == 1)  /* min value out of unsorted elem is found */
		{
			swap_array(array, i + 1, idx);
			print_array(array, size);
		}
		i++;
	}

}

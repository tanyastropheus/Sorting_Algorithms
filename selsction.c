#include "sort.h"
/**
 * selection_sort - sorts an array of int in ascending order usingSelection sort
 * @array: array to be sortef
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, start, i;
	int tmp, min;

/* outer for loop, increase starting point by 1 index every time */
	start = 0;
	while(start < size)
	{
/* store the value at start of array */
		tmp = array[start];
/* if value at start >= next value, store next value and keep going */
		for (i = start; array[i] != '\0'; i++)
		{
			if (array[i] >= array[i+1])
			{
				min = array[i + 1];
				idx = i + 1;
			}
			else
			{
				min = array[i];
				idx = i;
			}
		}

		array[start] = min;
		array[idx] = tmp;
		start++;
		for (i = 0; array[i] != '\0'; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("\n");
	}
}

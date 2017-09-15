#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: double pointer to the head node of the doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	int temp;
	int counter;
	int i;
	listint_t *c_node;

	c_node = *list;
	while (c_node->next) /* check each element in the array */
	{
		if (c_node->n > c_node->next->n)  /* compare with the next element */
		{
			temp = c_node->n;
			c_node->n = c_node->next->n;
			c_node->next->n = temp;
		}
		counter =0;
		while (c_node->prev && c_node->n < c_node->prev->n)  /* after swapping, compare with all the previous elemtns; if out of order, than swap */
		{
			temp = c_node->n;
			c_node->n = c_node->prev->n;
			c_node->prev->n = temp;
			c_node = c_node->prev;
			counter++;
		}
		for (i = 0; i <= counter; i++)
			c_node = c_node->next;
	}
}

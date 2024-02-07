#include "search_algos.h"

/**
 * linear_skip - Searches for a value contained in a skip list.
 * Assumes a list with sorted values and a single skip layer
 * with nodes at every index which is a multiple of the square
 * root of the size of the list.
 *
 * @list: Pointer to the head of the skip list to traverse.
 * @value: Value to search for.
 * Return: Pointer to the first node where value is located,
 *         or NULL if list is NULL or value not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = NULL, *stop = NULL;

	if (!list)
		return (NULL);
	current = list;
	while (current && current->express && current->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				current->express->index, current->express->n);
		current = current->express;
	}
	stop = current;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* Value potentially lies between two express nodes */
	if (current->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				current->express->index, current->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, current->express->index);
	}
	/* Value is greater than last express node, potentially out of list */
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, stop->index);
	}
	while (current != stop && current->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				current->index, current->n);
		current = current->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
			current->index, current->n);
	if (current == stop)
		return (NULL);
	return (current);
}

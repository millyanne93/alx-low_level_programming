#include "search_algos.h"

/**
 * jump_search - Searches for a value in an integer
 * array using Jump search algorithm
 *
 * @array: Input integer array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i, jump, steps, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int)sqrt((double)size);
	steps = 0;
	prev = i = 0;

	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	while (i < (int)size && array[i] < value)
	{
		steps++;
		prev = i;
		i = steps * jump;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}

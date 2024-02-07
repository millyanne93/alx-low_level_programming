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
	int index, block_size, jump_index, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	block_size = (int)sqrt((double)size);
	jump_index = 0;
	prev_index = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		jump_index++;
		prev_index = index;
		index = jump_index * block_size;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev_index, index);

	for (; prev_index <= index && prev_index < (int)size; prev_index++)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
		if (array[prev_index] == value)
			return (prev_index);
	}
	return (-1);
}

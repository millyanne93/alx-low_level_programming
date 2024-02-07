#include <stdio.h>

/**
 * advanced_binary_recursive - Recursively searches for
 * a value in a sorted array
 * of integers using the advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the range to search.
 * @high: The ending index of the range to search.
 * @value: The value to search for.
 *
 * Return: Index of the first occurrence of the value if found, otherwise -1.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	else
		return (advanced_binary_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the first occurrence of the value if found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

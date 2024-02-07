#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @start: The starting index of the range to search.
 * @end: The ending index of the range to search.
 * @value: The value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;

	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in array: ");

		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t start, end;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	start = bound / 2;
	end = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	return (binary_search(array, start, end, value));
}

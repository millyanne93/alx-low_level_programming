#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate through.
 * @size: The size of the array.
 * @action: The function to apply to each element.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

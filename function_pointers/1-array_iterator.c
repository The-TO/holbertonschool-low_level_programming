#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the integer array
 * @size: The size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Description: This function iterates through each element of the array
 * and executes the function pointed to by action on each element.
 * It includes NULL pointer checks for safety.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

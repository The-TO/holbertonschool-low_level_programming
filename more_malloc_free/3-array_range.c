#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (starting point)
 * @max: The maximum value (ending point)
 *
 * Description: Creates a dynamically allocated array containing all values
 * from min to max (both included), ordered from min to max. Returns NULL if
 * min > max or if malloc fails.
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

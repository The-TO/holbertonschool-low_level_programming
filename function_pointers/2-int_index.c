#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the integer array
 * @size: The number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Description: Searches for an integer in the array by applying the
 * comparison function to each element. Returns the index of the first
 * element for which cmp does not return 0.
 *
 * Return: Index of the first matching element,
 * or -1 if no match or invalid input
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0 ; i < size; i++)
	{
		cmp array(i);
		if (cmp array(i) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

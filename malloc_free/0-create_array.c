#include<stdlib.h>
/**
 * create_array - Creates a character array and initializes it
 * with a specific character.
 * @size: The size of the array to create (unsigned int)
 * @c: The character used for initialization
 *
 * Return: A pointer to the allocated array, or NULL if size is 0
 * or if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}

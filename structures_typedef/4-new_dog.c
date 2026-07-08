#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Copies a string into newly allocated memory
 * @str: String to copy
 *
 * Return: Pointer to the copy, or NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = _strdup(name);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = _strdup(owner);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->age = age;
	return (doggo);
}

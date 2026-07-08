#include "dog.h"

/**
 * _copy_string - Copies a string to a newly allocated memory
 * @src: Source string to copy
 *
 * Return: Pointer to the newly allocated and copied string, or NULL on failure
 */
char *_copy_string(char *src)
{
	char *dest;
	unsigned int i, len;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog structure with allocated memory
 * @name: Pointer to a string containing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a string containing the owner's name
 *
 * Return: Pointer to the newly created dog_t structure, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _copy_string(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _copy_string(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}

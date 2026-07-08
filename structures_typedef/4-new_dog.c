#include "dog.h"
#include <stdlib.h>
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
	int len, len2;
	int i;
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		return (NULL);
	}
	for (len = 0 ; name[len] != '\0'; len++)
	{}
	doggo->name = malloc((len + 1) * sizeof(char));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		doggo->name[i] = name[i];
		i++;
	}
	for (len2 = 0 ; owner[len2] != '\0'; len2++)
	{}
	doggo->owner = malloc((len2 + 1) * sizeof(char));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	i = 0;
	while (owner[i] != '\0')
	{
		doggo->owner[i] = owner[i];
		i++;
	}
	doggo->age = age;
	return (doggo);
}

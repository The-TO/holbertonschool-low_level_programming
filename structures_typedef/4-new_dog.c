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
	dog_t *d; // déclare un pointeur vers une structure dog_t

	d = malloc(sizeof(dog_t)); // alloue de la mémoire pour une structure dog_t
	if (d == NULL)			   // vérifie si l'allocation a échoué
		return (NULL);		   // retourne NULL si l'allocation a échoué

	d->name = _copy_string(name); // copie le string name dans le champ name de la structure
	if (d->name == NULL)		  // vérifie si la copie a échoué
	{
		free(d);	   // libère la mémoire de la structure d
		return (NULL); // retourne NULL
	}

	d->owner = _copy_string(owner); // copie le string owner dans le champ owner de la structure
	if (d->owner == NULL)			// vérifie si la copie a échoué
	{
		free(d->name); // libère la mémoire du champ name
		free(d);	   // libère la mémoire de la structure d
		return (NULL); // retourne NULL
	}

	d->age = age; // copie la valeur age dans le champ age de la structure
	return (d);	  // retourne le pointeur vers la structure initialisée
}
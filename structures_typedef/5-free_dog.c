#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Libère la mémoire d'une structure dog_t
 * @d: Pointeur vers la structure dog_t
 *
 * Description: Désalloue complètement une structure dog_t en libérant
 * les chaînes name et owner, puis la structure elle-même.
 *
 * Return: Aucune (void)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère toute la mémoire utilisée par une structure dog_t
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Description:
 * Cette fonction désalloue complètement un chien créé avec new_dog().
 * Elle libère d'abord les chaînes de caractères (name et owner),
 * puis la structure elle-même.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	/* Vérifie que le pointeur est valide avant de le libérer */
	if (d == NULL)
	{
		return;
	}

	/*
	 * Libère la mémoire allouée pour le nom.
	 * Cette mémoire a été réservée avec malloc dans new_dog().
	 */
	free(d->name);

	/*
	 * Libère la mémoire allouée pour le propriétaire.
	 */
	free(d->owner);

	/*
	 * Une fois tous les éléments internes libérés,
	 * on peut enfin libérer la structure elle-même.
	 */
	free(d);
}
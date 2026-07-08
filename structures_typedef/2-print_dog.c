#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'un chien
 * @d: Pointeur vers la structure dog à afficher
 *
 * Description:
 * Cette fonction affiche le contenu d'une structure dog.
 * Si la structure n'existe pas (d == NULL), la fonction ne fait rien.
 * Si le nom ou le propriétaire est NULL, elle affiche "(nil)"
 * afin d'éviter un comportement indéfini avec printf("%s").
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	/* Vérifie que la structure existe avant d'y accéder */
	if (d == NULL)
	{
		return;
	}

	/*
	 * Vérifie si le nom existe.
	 * Si le pointeur vaut NULL, on affiche "(nil)".
	 * Sinon, on affiche le nom du chien.
	 */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	/*
	 * L'âge est un float.
	 * Il est stocké directement dans la structure et ne peut donc
	 * pas être NULL.
	 */
	printf("Age: %f\n", d->age);

	/*
	 * Même principe que pour le nom.
	 * Si le propriétaire n'existe pas, on affiche "(nil)".
	 */
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
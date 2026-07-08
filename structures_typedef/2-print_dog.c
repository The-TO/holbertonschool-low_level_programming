#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure dog à afficher
 *
 * Description:
 * Affiche les informations d'un chien (nom, âge, propriétaire).
 * Si un élément est NULL, affiche "(nil)" à la place.
 * Si d est NULL, la fonction ne fait rien.
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Owner is: %s\n", d->owner);
	}
}

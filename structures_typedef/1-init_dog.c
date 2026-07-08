#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialise une structure dog avec les valeurs fournies
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 *
 * Description:
 * Cette fonction remplit une structure dog déjà existante.
 * Elle ne crée pas de nouvelle structure et n'alloue aucune mémoire.
 * Elle se contente d'affecter les valeurs reçues aux membres de la structure.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Vérifie que le pointeur est valide avant de l'utiliser */
	if (d == NULL)
	{
		return;
	}

	/*
	 * Le pointeur d permet d'accéder aux membres de la structure.
	 * L'opérateur "->" est l'équivalent de (*d).membre.
	 */

	/* Associe le nom reçu à la structure */
	d->name = name;

	/* Enregistre l'âge du chien */
	d->age = age;

	/* Associe le propriétaire reçu à la structure */
	d->owner = owner;
}
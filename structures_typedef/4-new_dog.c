#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Crée une copie d'une chaîne de caractères
 * @str: Chaîne à copier
 *
 * Description:
 * Alloue suffisamment de mémoire pour contenir une copie de la chaîne,
 * puis copie tous les caractères (y compris le '\0' final).
 *
 * Return: Un pointeur vers la nouvelle chaîne, ou NULL si malloc échoue.
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int len;

	/* Calcule la longueur de la chaîne */
	for (len = 0; str[len] != '\0'; len++)
	{
	}

	/* Alloue la mémoire nécessaire (+1 pour le '\0') */
	copy = malloc((len + 1) * sizeof(char));

	/* Vérifie que malloc a bien réussi */
	if (copy == NULL)
	{
		return (NULL);
	}

	/*
	 * Copie tous les caractères.
	 * On utilise <= len afin de copier également le '\0'.
	 */
	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	/* Retourne l'adresse de la nouvelle copie */
	return (copy);
}

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 *
 * Description:
 * Alloue une nouvelle structure dog_t, puis crée une copie indépendante
 * du nom et du propriétaire afin que la structure possède ses propres
 * chaînes de caractères.
 *
 * Return: Un pointeur vers le nouveau chien, ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	/* Alloue la mémoire pour la structure */
	doggo = malloc(sizeof(dog_t));

	/* Si malloc échoue, on ne peut rien faire */
	if (doggo == NULL)
	{
		return (NULL);
	}

	/* Crée une copie du nom du chien */
	doggo->name = _strdup(name);

	/*
	 * Si la copie du nom échoue,
	 * on libère la structure avant de quitter.
	 */
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	/* Crée une copie du nom du propriétaire */
	doggo->owner = _strdup(owner);

	/*
	 * Si cette allocation échoue :
	 * - on libère le nom déjà alloué,
	 * - puis la structure,
	 * - et on retourne NULL.
	 */
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	/* Stocke simplement l'âge dans la structure */
	doggo->age = age;

	/* Retourne l'adresse du nouveau chien */
	return (doggo);
}
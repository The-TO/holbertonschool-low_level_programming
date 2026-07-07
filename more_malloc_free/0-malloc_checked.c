#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Alloue de la mémoire et gère les erreurs
 * @b: Nombre de bytes à allouer
 *
 * Description: Alloue dynamiquement b bytes de mémoire à l'aide de malloc.
 * Si l'allocation échoue, la fonction cause la terminaison du processus
 * avec le code de sortie 98.
 *
 * Return: Pointeur vers la mémoire allouée
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; /* void* car cette fonction est générique : elle peut allouer */
	           /* pour n'importe quel type, à l'appelant de caster ensuite */

	ptr = malloc(b);

	/* Ici pas de "return NULL" comme dans tes autres fonctions : */
	/* le choix de design est de tuer le programme direct avec exit(98) */
	/* plutôt que de laisser l'appelant gérer l'échec lui-même */
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
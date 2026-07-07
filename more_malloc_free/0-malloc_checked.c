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
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

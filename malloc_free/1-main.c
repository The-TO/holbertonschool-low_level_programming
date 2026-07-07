#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s; /* pointeur qui recevra la chaîne dupliquée par _strdup */

    /* Appel de ta fonction perso _strdup, qui doit malloc + copier "Duplicated" */
    s = _strdup("Duplicated");

    /* Vérification obligatoire après tout malloc : si _strdup a échoué en interne, */
    /* s vaudra NULL ici, et on ne doit surtout pas essayer de l'utiliser (printf, free...) */
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1); /* code d'erreur différent de 0 pour signaler l'échec */
    }

    /* Si on arrive ici, s pointe vers une zone allouée valide contenant
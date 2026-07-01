#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse reverse the content of an array
 * @a: Pointeur vers le tableau d'entiers
 * @n: Le nombre d'éléments dans le tableau
 *
 *
 * Return: void (Aucun retour)
 */
void reverse_array(int *a, int n)
{
    int i =0;
	int j;
    int temp;

    for (i = 0 ; i != n ; i++)
    {
        temp = *a;
	    *a = n;
	    n = temp;
        
    }
}
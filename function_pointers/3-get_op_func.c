#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator string
 * Return: Pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, // lie l'opérateur "+" à la fonction op_add
		{"-", op_sub}, // lie l'opérateur "-" à la fonction op_sub
		{"*", op_mul}, // lie l'opérateur "*" à la fonction op_mul
		{"/", op_div}, // lie l'opérateur "/" à la fonction op_div
		{"%", op_mod}, // lie l'opérateur "%" à la fonction op_mod
		{NULL, NULL}   // sentinelle: marque la fin du array, arrête la boucle
	};

	int i = 0; // initialise le compteur i à 0

	while (ops[i].op != NULL) // boucle tant que ops[i].op n'est pas NULL
	{
		// si le premier caractère de ops[i].op égale le premier caractère de s ET s n'a qu'un caractère
		if (*(ops[i].op) == *s && s[1] == '\0')
		{
			return (ops[i].f); // retourne le pointeur sur la fonction trouvée
		}

		i++; // passe à l'élément suivant du array
	}

	return (NULL); // retourne NULL si aucun opérateur ne correspondait
}
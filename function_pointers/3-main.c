#include "3-calc.h"

/**
 * main - Entry point, performs calculations
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;	  // déclare les variables num1, num2 et result
	int (*op_func)(int, int); // déclare un pointeur vers une fonction prenant 2 int

	if (argc != 4) // vérifie que argc est bien égal à 4
	{
		printf("Error\n"); // affiche "Error" suivi d'un retour à la ligne
		exit(98);		   // quitte le programme avec le code 98
	}

	num1 = atoi(argv[1]);			// convertit argv[1] en entier et le stocke dans num1
	num2 = atoi(argv[3]);			// convertit argv[3] en entier et le stocke dans num2
	op_func = get_op_func(argv[2]); // récupère la fonction correspondant à l'opérateur donné

	if (op_func == NULL) // vérifie si l'opérateur n'est pas valide
	{
		printf("Error\n"); // affiche "Error"
		exit(99);		   // quitte avec le code 99
	}

	// vérifie si on tente une division ou un modulo par 0
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n"); // affiche "Error"
		exit(100);		   // quitte avec le code 100
	}

	result = op_func(num1, num2); // appelle la fonction d’opération avec num1 et num2
	printf("%d\n", result);		  // affiche le résultat suivi d’un retour à la ligne

	return (0); // indique que le programme s’est exécuté correctement
}
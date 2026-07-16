#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Description: Adds all positive numbers passed as command line arguments.
 * If no arguments, prints 0. If any argument contains non-digit characters,
 * prints "Error" and returns 1.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;			// Compteur pour les arguments (les "mots" dans argv)
	int j;			// Compteur pour les caractères (les "lettres" dans argv[i])
	int sum;		// Stocke la somme totale


	if (argc == 1) 					// Si argc == 1, seul le nom du programme est présent.
	{
		printf("0\n");				// Affiche 0, car la somme de 0 nombre est 0
		return (0);
	}
	sum = 0;
	for (i = 1 ; i < argc ; i++)	// Initialise 'i' à 1 pour ignorer argv[0] (le nom du programme) dans la boucle
	{
		j = 0;						// Réinitialise le compteur de caractères pour CHAQUE nouvel argument
		while (argv[i][j] != '\0')	// Boucle sur chaque CARACTÈRE de la chaîne argv[i]
		{
		if (!isdigit(argv[i][j]))	// Vérifie si le caractère actuel N'EST PAS un chiffre (0-9)
		{
			printf("Error\n");
			return (1);
		}
		j++;						// Passe au caractère suivant
		}
		sum += atoi(argv[i]);		// On convertit la chaîne en entier et on l'AJOUTE à la somme
	}
	printf("%d\n", sum);
	return (0);
}

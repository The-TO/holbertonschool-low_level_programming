#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Description: This program counts and displays the total number of
 * command-line arguments passed to it, including the program name itself.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	/* argc contient le nombre total d'arguments reçus,
	 * y compris le nom du programme (argv[0]).
	 *
	 * Comme la consigne demande uniquement le nombre
	 * d'arguments passés par l'utilisateur, on retire 1.
	 *
	 * Exemple :
	 *   ./nargs           -> argc = 1 -> affiche 0
	 *   ./nargs hello     -> argc = 2 -> affiche 1
	 *   ./nargs a b c     -> argc = 4 -> affiche 3
	 */
	printf("%d\n", argc - 1);
	return (0);
}

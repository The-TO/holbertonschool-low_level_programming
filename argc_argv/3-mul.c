#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Description: Multiplies two integer numbers passed as command line arguments
 * and prints the result. If the
 * number of arguments is incorrect, prints "Error"
 * and returns 1.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1;						// Variable pour stocker le premier nombre
	int num2;						// Variable pour stocker le second nombre

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);			// Convertit le 1er argument (argv[1]) de chaîne (ASCII) en entier
	num2 = atoi(argv[2]);			// Convertit le 2e argument (argv[2]) de chaîne (ASCII) en entier
	printf("%d\n", num1 * num2);	// Calcule et affiche la multiplication
	return (0);
}

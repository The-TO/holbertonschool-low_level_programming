#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed into the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Description: This program prints each command-line argument
 * on a separate line, including the program name.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

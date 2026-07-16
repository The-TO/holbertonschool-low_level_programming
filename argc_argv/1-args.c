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
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
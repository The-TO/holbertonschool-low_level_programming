#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer
 * @name: The name string to print
 * @f: A pointer to the function that will print the name
 *
 * Description: This function takes a name and a function pointer,
 * then calls the function pointer with the name as parameter.
 * It includes NULL pointer checks for safety.
 *
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
   if (name == NULL || f == NULL)
   {
    return;
   }
    f(name);
}
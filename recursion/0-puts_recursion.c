#include "main.h"
/**
 * _puts_recursion - Affiche une chaîne de caractères
 * suivie d'une nouvelle ligne
 * @s: Pointeur sur la chaîne de caractères à afficher
 *
 * Description: Fonction récursive qui affiche chaque caractère d'une chaîne
 * jusqu'à rencontrer le caractère nul ('\0'). Après avoir affiché tous les
 * caractères, la fonction affiche une nouvelle ligne.
 *
 * Return: Aucune valeur de retour (void)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

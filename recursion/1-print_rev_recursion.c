#include "main.h"
/**
 * _print_rev_recursion - Affiche une chaîne en ordre inverse
 * @s: Pointeur sur la chaîne de caractères à afficher
 *
 * Description: Fonction récursive qui affiche une chaîne de caractères
 * en ordre inverse (du dernier au premier caractère). La fonction descend
 * récursivement jusqu'à rencontrer le caractère nul ('\0'), puis affiche
 * les caractères un par un en remontant la pile d'appels. Cela inverse
 * automatiquement l'ordre d'affichage.
 *
 * Exemple: Si la chaîne est "Bonjour", elle affichera "ruojnoB"
 *
 * Return: Aucune valeur de retour (void)
 */


void _print_rev_recursion(char *s)
{
    
	if (*s != '\0')
	{
        _print_rev_recursion(s+1);
        _putchar(*s);
        
        
	}
	else
	{
		_putchar('\n');
	}
}

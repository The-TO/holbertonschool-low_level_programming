#include "main.h"
/**
 * more_numbers - is a fonction print number on 14 lines
 *
 * Return: 0 (Succes)
 */
void more_numbers(void)
{
	int number = 0;
	int i = 0;

	while (i < 10)
	{
		number = 0;
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar ((number / 10) + '0');
			}
			_putchar ((number % 10) + '0');
		 number++;
		}
	 _putchar ('\n');
		i++;
	}

}

#include "main.h"
/**
 *jack_bauer - work to print each minutes of the day
 *
 *Return: 0 (Succes)
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour <= 23)
	{
		int minute = 0;

		while (minute <= 59)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((minute / 10) + '0');
			_putchar ((minute % 10) + '0');
			minute++;
			_putchar('\n');
		}
		hour++;
	}

}

#include "main.h"
/**
 *times_table - work to print time table
 *
 *Return: 0 (Succes)
 */
void times_table(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 0)
			{
				_putchar (i * j + '0');
			}
			else if (i * j >= 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (i * j / 10 + '0');
				_putchar (i * j % 10 + '0');
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar(i * j + '0');
			}
			}
	_putchar('\n');
	}
}

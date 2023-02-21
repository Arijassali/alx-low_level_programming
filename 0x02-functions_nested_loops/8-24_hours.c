#include "main.h"

<<<<<<< HEAD
/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');

		}

	}

=======

/**
 * Jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;


	i = 0;


	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
>>>>>>> 7f6b4eed7f9b62ce8bba9243e2720c6138febc80
}

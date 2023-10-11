#include "main.h"

/**
 * jack_bauer -  a function that prints every minute of the day
 * from 0h00 to 23h59
 */

void jack_bauer(void)
{
	int i;
	int j;

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
			j = j + 1;
		}
		i = i + 1;
	}
}

#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int tens = '0';
	int ones = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((tens == ones) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);

				if (!(tens == '8' && ones == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

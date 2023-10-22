#include <stdio.h>

/**
 * main -  a program that prints all possible 
 * different combinations of three digits
 * Return: 0
 */

int main(void)
{
	int hundreds = '0';
	int tens = '0';
	int ones = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '0'; ones++)
			{
				if (!((hundreds == tens) ||
				(hundreds > tens) ||
				(tens == ones) ||
				(tens > ones)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
				}
				
				if (!(hundreds == '7' && tens == '8' && ones == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}	


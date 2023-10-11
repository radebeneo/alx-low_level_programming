#include "main.h"

/**
 * print_alphabet_x10 -  function prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha = alpha + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}

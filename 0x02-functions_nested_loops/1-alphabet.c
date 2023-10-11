#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
		_putchar(alpha);

	_putcha('\n');
}

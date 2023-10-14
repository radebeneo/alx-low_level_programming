#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from zero to nine
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

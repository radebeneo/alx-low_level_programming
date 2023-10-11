#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: integer to be checked
 * Return: 1 if n is greater than zero
 *  0 if n is zero
 *  -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

#include "main.h"
/**
 * _print_rev_recursion - reverses a string and prints
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

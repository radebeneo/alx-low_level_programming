#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if not
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}

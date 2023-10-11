#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is alphabet, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

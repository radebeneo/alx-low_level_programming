#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to check
 * Return: 1 if upercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letters of a string
 * to uppercase
 * @c: pointer to character
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}

		i++;
	}

	return (c);
}

#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 *  starting with the first character
 *  @str: string to be used
 *  Return: print
 */

void puts2(char *str)
{
	int length = 0;
	int j = 0;
	int i;
	char *c = str;

	while (*c != '\0')
	{
		c++;
		length++;
	}
	j = length - 1;

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

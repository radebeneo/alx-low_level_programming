#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @c: string to be encoded
 * Return: c
 */

char *leet(char *c)
{
	int i;
	int j;

	char letter[] = "AaEeOoTtLl";
	char code[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == letter[j])
			{
				c[i] = code[j];
			}
		}
	}

	return (c);
}

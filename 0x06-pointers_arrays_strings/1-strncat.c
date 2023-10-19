#include "main.h"

/**
 * _strncat -  a function that concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: string to concatenate to
 * @src: string to concatenate
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

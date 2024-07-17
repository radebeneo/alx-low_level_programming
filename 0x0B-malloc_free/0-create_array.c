#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with specific char
 * @size: size of array
 * @c: char to initialize
 * Description: creates an array of chars, initializes it with specific char
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

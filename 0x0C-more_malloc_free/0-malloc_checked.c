#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr ==NULL)
		exit(98);

	return (ptr);
}

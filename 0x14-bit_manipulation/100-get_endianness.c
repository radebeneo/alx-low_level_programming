#include "main.h"

/**
 * get_endianness -  checks the endianness, order of bytes in memory
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;

	return (*b);
}

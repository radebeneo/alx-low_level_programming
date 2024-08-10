#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to a new one
 * @n: first number
 * @m: new number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;

		if (current & 1)
			countbit++;
	}

	return (countbit);
}

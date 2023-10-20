#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n - 1); i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

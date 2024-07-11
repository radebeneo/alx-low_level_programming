#include "main.h"

int _sqrt_recursion_1(int n, int i);
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: base
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_1(n, 0));
}

/**
 * _sqrt_recursion_1 - performs recursion to find natural square root
 * @n: base
 * @i: iterator
 * Return: result
 */
int _sqrt_recursion_1(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion_1(n, i + 1));
}

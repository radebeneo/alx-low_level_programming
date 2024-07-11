#include "main.h"

int execute_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: base
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (execute_sqrt_recursion(n, 0));
}

/**
 * execute_sqrt_recursion - performs recursion to find natural square root
 * @n: base
 * @i: iterator
 * Return: result
 */
int execute_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (execute_sqrt_recursion(n, i + 1));
}

#include "main.h"

int prime_calculator(int n, int i);

/**
 * is_prime_number - checks if integer is prime number
 * @n: integer
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calculator(n, n - 1));
}

/**
 * prime_calculator - recurses to calculate if integer is prime
 * @n: integer
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int prime_calculator(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 0)
		return (0);
	return (prime_calculator(n, i - 1));
}

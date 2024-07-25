#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  Product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Quotient of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: Quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Remainder from the quotient of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

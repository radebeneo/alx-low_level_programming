#include <stdio.h>
/**
 * main -  program that prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of char: %d byte(s)\n", sizeof(c));
	printf("Size of int: %d byte(s)\n", sizeof(i));
	printf("Size of long int: %d byte(s)\n", sizeof(l));
	printf("Size of long long int: %d byte(s)\n", sizeof(ll));
	printf("Size of float: %d byte(s)\n", sizeof(f));

	return (0);
}
